#pragma once
#include "Skills.h"
#include "Questions.h"
#include <process.h>

namespace DrWhiskers {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Assistant
	/// </summary>
	public ref class Assistant :  public Questions
	{
	public:
		Assistant()
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
		~Assistant()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Assistant::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-18, -36);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(513, 530);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 657);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Yes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Assistant::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(79, 657);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 43);
			this->button2->TabIndex = 3;
			this->button2->Text = L"No";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Assistant::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(148, 657);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 43);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Not Sure";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Assistant::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-9, 483);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(504, 402);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(297, 657);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Solved/Exit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Assistant::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(24, 491);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(383, 160);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"Does the code compile and run\?";
			// 
			// Assistant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(470, 712);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Assistant";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dr. Whiskers++";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//yes button clicked
	private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {

		this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		array<String^>^ questions = gcnew array<String^>(9);
		questions[0] = { "Do all loops have an end or break statement?" };
		questions[1] = { "Check for else in else if statements, are they all there?" };
		questions[2] = { "Does the if statement/loop logic make sense? Are your comparison operators correct?" };
		questions[3] = { "Do all the pass by references have the right operators(* or &)?" };
		questions[4] = { "Are all semicolons where they need to be?" };
		questions[5] = { "Have all your variables been initialized and declared?" };
		questions[6] = { "Check that brackets match. Do all the brackets have a matching close bracket?" };
		questions[7] = { "Are required libraries included? (invalid references to functions)" };
		questions[8] = { "Do function prototypes exist at the beginning of the code for functions defined later?" };
		if (s == 1) {
			this->Hide();
			Skills^ skills = gcnew Skills();
			skills->Show();
		}
		if (i == 0) {
			compile = true;
		}
		if (compile == false) {
			if (i > 8) {
				this->textBox1->Text = L"If the code still does not work \nproperly, try using a debugging \nskill";
				this->Controls->Remove(this->button2);
				this->Controls->Remove(this->button3);
				this->button1->Text = L"Skills";
				s = 1; // enables yes button to turn into skills button
			}
			else {
				this->textBox1->Text = questions[i];
				i++;
			}
		}
		else if (compile == true) {
			if (i > 3) {
				this->textBox1->Text = L"If the code still does not work \nproperly, try using a debugging \nskill";
				this->Controls->Remove(this->button2);
				this->Controls->Remove(this->button3);
				this->button1->Text = L"Skills";
				s = 1; // enables yes button to turn into skills button
			}
			else {
				this->textBox1->Text = questions[i];
				i++;
			}
		}
	}
		   //no button clicked
	private: System::Void button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
		array<String^>^ solutions = gcnew array<String^>(9);
		solutions[0] = { "Ensure your loops end so that they do not cause infinite loops. This can be achieved with an increment operator and corresponding variable in the condition of the loop. It is also possible to end a loop with break or return. " };
		solutions[1] = { "Ensuring there is an else statement to every if statement is important since else statements give the program specific directions in the case of the if condition not being met." };
		solutions[2] = { "Ensure the conditions in the if statements are facing the right way and make sense for your code. Make sure you have the right < or > operator. Also make sure you have == and not = in your conditions. " };
		solutions[3] = { "Ensure that when referencing the address of a variable & is used, and when referencing the value of a variable * is used." };
		solutions[4] = { "Add a semicolon where one is missing, and check if your IDE detects any other missing semicolons. Most statements in CPP require closing semicolons, as well as struct declarations." };
		solutions[5] = { "Initialize all variables that will be used by your code. Be sure to declare your variables within the correct scope. For example, if a variable is going to be accessed by multiple functions with no arguments, it’ll have to be declared outside of those functions." };
		solutions[6] = { "Place a closing bracket at the end of every block of code. This also applies to parentheses, as each function needs to have opening and closing parentheses around its arguments." };
		solutions[7] = { "Include the libraries that are required for the functions you’re using. This can be done using the “#include keyword” at the start of your code. Following the keyword, the name of the library file is included between angle brackets ( < and > ) if the library is provided by the system, and between double quotations ( “library name” ) otherwise." };
		solutions[8] = { "Functions that are defined after they are called require prototypes at the start of the code (but after the inclusion of libraries) to tell the compiler where to find those functions. A prototype consists of the same code as the function, but without the block of code that executes when it is called. Also, only the types of the argument variables are required, rather than the type and name. " };

		if(this->textBox1->Text == L"Does the code compile and run\?")
		this->textBox1->Text = L"Are all semicolons where they need to be?";
		if (i == 0) {
			compile = false;
			i = 5; //sets i to questions that have to do with the code not compiling, not including the semicolon one since it has already been done
		}
		else {
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			int j = i - 1;
			String^ temp = solutions[j] + "\n" +"To continue, click \"Yes\".";
			this->textBox1->Text = temp;
		}
	}
		//solved/exit button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Application::Restart();
	}
		   //Not sure button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Process^ userManual = gcnew Process();
		userManual->StartInfo->FileName = "https://drive.google.com/file/d/11dPA1V7_nwaiJ0p_NL4Qn75jYqiFwJvf/view?usp=sharing";
		userManual->Start();
	}
};
}
