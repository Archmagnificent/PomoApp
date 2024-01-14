#pragma once
#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono;

namespace PomoTimer
{
	const auto one_minute = 60s;
	const auto one_second = 1s;

	class PomoAppTimer
	{
	private:
		int m_displayMins	{};
		int m_displaySecs	{};

		bool paused			{ true };

	public :
		void start(int timeMult)
		{
			paused = false;
			const auto start = steady_clock::now();
			duration<double> time_left = (one_minute * timeMult) - (steady_clock::now() - start);
			

			while((time_left > 0s) && !paused)
			{
				const auto mins = duration_cast<minutes>(time_left);
				const auto secs = duration_cast<seconds>(time_left - mins);

				m_displayMins = mins.count();
				m_displaySecs = secs.count();

				std::this_thread::sleep_for(1s);
			}
			
		}
		void stop() 
		{
			paused = true;
		}

		void clearTimer	()
		{
			paused = true;
		}

		int getMinutes() { return m_displayMins; }
		int getSeconds() { return m_displaySecs; }
	};
}
