#pragma once
#include "Timer.h"
#include <thread>
#include <chrono>
#include <string_view>

namespace PomoApp 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PomoTimer;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Short_Break_Button;
	private: System::Windows::Forms::Button^ Long_Break_Button;


	private: System::Windows::Forms::Button^ Pomodoro_Button;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Timer_Label_Minutes;
	private: System::Windows::Forms::Label^ Timer_Label_Seconds;



	private: System::Windows::Forms::Label^ Timer_Label_Colon;


	private: System::Windows::Forms::Button^ Start_Button;
	private: System::Windows::Forms::Timer^ timer1;
	public: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::Label^ Flavour_Text_Label;
	public:

	public:
	private:





	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	protected:


	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Start_Button = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Timer_Label_Seconds = (gcnew System::Windows::Forms::Label());
			this->Timer_Label_Colon = (gcnew System::Windows::Forms::Label());
			this->Timer_Label_Minutes = (gcnew System::Windows::Forms::Label());
			this->Long_Break_Button = (gcnew System::Windows::Forms::Button());
			this->Short_Break_Button = (gcnew System::Windows::Forms::Button());
			this->Pomodoro_Button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Flavour_Text_Label = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Bisque;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PomoApp";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Start_Button);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->Long_Break_Button);
			this->panel1->Controls->Add(this->Short_Break_Button);
			this->panel1->Controls->Add(this->Pomodoro_Button);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(60, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(480, 281);
			this->panel1->TabIndex = 1;
			// 
			// Start_Button
			// 
			this->Start_Button->BackColor = System::Drawing::Color::Bisque;
			this->Start_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Start_Button->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Start_Button->ForeColor = System::Drawing::Color::Black;
			this->Start_Button->Location = System::Drawing::Point(169, 226);
			this->Start_Button->Name = L"Start_Button";
			this->Start_Button->Size = System::Drawing::Size(130, 40);
			this->Start_Button->TabIndex = 5;
			this->Start_Button->Text = L"Start";
			this->Start_Button->UseVisualStyleBackColor = false;
			this->Start_Button->Click += gcnew System::EventHandler(this, &MyForm::Start_Button_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Timer_Label_Seconds);
			this->panel2->Controls->Add(this->Timer_Label_Colon);
			this->panel2->Controls->Add(this->Timer_Label_Minutes);
			this->panel2->Location = System::Drawing::Point(99, 91);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(270, 90);
			this->panel2->TabIndex = 4;
			// 
			// Timer_Label_Seconds
			// 
			this->Timer_Label_Seconds->AutoSize = true;
			this->Timer_Label_Seconds->BackColor = System::Drawing::Color::Transparent;
			this->Timer_Label_Seconds->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Timer_Label_Seconds->ForeColor = System::Drawing::Color::Bisque;
			this->Timer_Label_Seconds->Location = System::Drawing::Point(165, 15);
			this->Timer_Label_Seconds->Name = L"Timer_Label_Seconds";
			this->Timer_Label_Seconds->Size = System::Drawing::Size(97, 63);
			this->Timer_Label_Seconds->TabIndex = 2;
			this->Timer_Label_Seconds->Text = L"00";
			// 
			// Timer_Label_Colon
			// 
			this->Timer_Label_Colon->AutoSize = true;
			this->Timer_Label_Colon->BackColor = System::Drawing::Color::Transparent;
			this->Timer_Label_Colon->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Timer_Label_Colon->ForeColor = System::Drawing::Color::Bisque;
			this->Timer_Label_Colon->Location = System::Drawing::Point(114, 15);
			this->Timer_Label_Colon->Name = L"Timer_Label_Colon";
			this->Timer_Label_Colon->Size = System::Drawing::Size(45, 63);
			this->Timer_Label_Colon->TabIndex = 1;
			this->Timer_Label_Colon->Text = L":";
			// 
			// Timer_Label_Minutes
			// 
			this->Timer_Label_Minutes->AutoSize = true;
			this->Timer_Label_Minutes->BackColor = System::Drawing::Color::Transparent;
			this->Timer_Label_Minutes->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Timer_Label_Minutes->ForeColor = System::Drawing::Color::Bisque;
			this->Timer_Label_Minutes->Location = System::Drawing::Point(11, 15);
			this->Timer_Label_Minutes->Name = L"Timer_Label_Minutes";
			this->Timer_Label_Minutes->Size = System::Drawing::Size(97, 63);
			this->Timer_Label_Minutes->TabIndex = 0;
			this->Timer_Label_Minutes->Text = L"25";
			this->Timer_Label_Minutes->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->Timer_Label_Minutes->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// Long_Break_Button
			// 
			this->Long_Break_Button->BackColor = System::Drawing::Color::Transparent;
			this->Long_Break_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Long_Break_Button->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Long_Break_Button->Location = System::Drawing::Point(315, 13);
			this->Long_Break_Button->Name = L"Long_Break_Button";
			this->Long_Break_Button->Size = System::Drawing::Size(130, 40);
			this->Long_Break_Button->TabIndex = 1;
			this->Long_Break_Button->Text = L"Long Break";
			this->Long_Break_Button->UseVisualStyleBackColor = false;
			this->Long_Break_Button->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// Short_Break_Button
			// 
			this->Short_Break_Button->BackColor = System::Drawing::Color::Transparent;
			this->Short_Break_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Short_Break_Button->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Short_Break_Button->Location = System::Drawing::Point(169, 13);
			this->Short_Break_Button->Name = L"Short_Break_Button";
			this->Short_Break_Button->Size = System::Drawing::Size(130, 40);
			this->Short_Break_Button->TabIndex = 2;
			this->Short_Break_Button->Text = L"Short Break";
			this->Short_Break_Button->UseVisualStyleBackColor = false;
			this->Short_Break_Button->Click += gcnew System::EventHandler(this, &MyForm::Short_Break_Button_Click);
			// 
			// Pomodoro_Button
			// 
			this->Pomodoro_Button->BackColor = System::Drawing::Color::Transparent;
			this->Pomodoro_Button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Pomodoro_Button->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Pomodoro_Button->Location = System::Drawing::Point(23, 13);
			this->Pomodoro_Button->Name = L"Pomodoro_Button";
			this->Pomodoro_Button->Size = System::Drawing::Size(130, 40);
			this->Pomodoro_Button->TabIndex = 0;
			this->Pomodoro_Button->Text = L"Pomodoro";
			this->Pomodoro_Button->UseVisualStyleBackColor = false;
			this->Pomodoro_Button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(480, 281);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// Flavour_Text_Label
			// 
			this->Flavour_Text_Label->AutoSize = true;
			this->Flavour_Text_Label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Flavour_Text_Label->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Flavour_Text_Label->Location = System::Drawing::Point(225, 28);
			this->Flavour_Text_Label->Name = L"Flavour_Text_Label";
			this->Flavour_Text_Label->Size = System::Drawing::Size(169, 24);
			this->Flavour_Text_Label->TabIndex = 6;
			this->Flavour_Text_Label->Text = L"Time to focus!";
			this->Flavour_Text_Label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"Time\'s up";
			this->notifyIcon1->Visible = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Tomato;
			this->ClientSize = System::Drawing::Size(596, 423);
			this->Controls->Add(this->Flavour_Text_Label);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		const int pomoTime       {25};
		const int shortBreakTime {5};
		const int longBreakTime  {15};

		const int minute		 { 60 };
		const int second		 { 1 };

		int time				 {1500};
		int secsPassed			 {60};

		int chosenTime			 {0};

		bool flipped{ false };

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{

	Timer_Label_Minutes->Text = Convert::ToString(longBreakTime);
	time = minute * longBreakTime;
	secsPassed = 60;
	Timer_Label_Seconds->Text = Convert::ToString(00);
	this->BackColor = System::Drawing::Color::SteelBlue;
	timer1->Stop();
	Flavour_Text_Label->Text = "Time for a longer break!";

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) 
{

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Timer_Label_Minutes->Text = Convert::ToString(pomoTime);
	time = minute * pomoTime;
	secsPassed = 60;
	Timer_Label_Seconds->Text = Convert::ToString(00);
	this->BackColor = System::Drawing::Color::Tomato;
	timer1->Stop();
	Flavour_Text_Label->Text = "Time to focus!";
}
private: System::Void Short_Break_Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Timer_Label_Minutes->Text = Convert::ToString(shortBreakTime);
	time = minute * shortBreakTime;
	secsPassed = 60;
	Timer_Label_Seconds->Text = Convert::ToString(00);
	this->BackColor = System::Drawing::Color::LightSeaGreen;
	timer1->Stop();
	Flavour_Text_Label->Text = "Time for a break!";
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void Start_Button_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if(flipped == false)
	{
		timer1->Interval = 1000;
		timer1->Start();
		Start_Button->Text = "Stop";
		flipped = true;
	} else
	{
		timer1->Stop();
		Start_Button->Text = "Start";
		flipped = false;
	}
}

	   bool notify{ true };
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{	

	if(time > 0)
	{
		Timer_Label_Minutes->Text = Convert::ToString(time / 60);
		Timer_Label_Seconds->Text = Convert::ToString((secsPassed == 60)? 0 : secsPassed);
		time--;
		secsPassed--;
		if (secsPassed <= 0) 
		{ 
			secsPassed = 60; 
		}

	} else if (notify)
	{
		Timer_Label_Seconds->Text = "0";
		notifyIcon1->ShowBalloonTip(3, "PomoApp", "Time's up", ToolTipIcon::Info);
		notify = false;
	}
}
};
}
