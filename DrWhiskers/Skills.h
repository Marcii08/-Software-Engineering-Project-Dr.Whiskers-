#pragma once

namespace DrWhiskers {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Skills
	/// </summary>
	public ref class Skills : public System::Windows::Forms::Form
	{
	public:
		Skills(void)
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
		~Skills()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int i = 0;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Skills::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 86);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(200, 5, 150, 5);
			this->label1->Size = System::Drawing::Size(350, 56);
			this->label1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(298, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 43);
			this->button1->TabIndex = 5;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Skills::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(346, 9);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 43);
			this->button2->TabIndex = 6;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Skills::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(15, 14);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(335, 316);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(8, 9);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 43);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Return";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Skills::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-12, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(428, 575);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Skills::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 86);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(5);
			this->label2->Size = System::Drawing::Size(191, 56);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Google it";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(165)));
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(32, 160);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(350, 330);
			this->panel1->TabIndex = 15;
			// 
			// Skills
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(235)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(408, 533);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Skills";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dr.Whiskers++";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //backward button cycles through skills
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (i > 0) {
			i--;
		}
		else if (i <= 0) {
			i = 2;
		}
		array<String^>^ skillsTitle = gcnew array<String^>(9);
		skillsTitle[0] = { "Google it" };
		skillsTitle[1] = { "Brute Force" };
		skillsTitle[2] = { "Debugger Tool" };
		this->label2->Text = skillsTitle[i];

		array<String^>^ skillsText = gcnew array<String^>(9);
		skillsText[0] = { "This Debugging Skill involves using the google search engine to look for solutions to problems that may have already been answered by other programmers. If there is an issue with your code, it is likely that others have had the same or similar issues as well and have had their issues resolved. From there, it is just a matter of incorporating that solution into your code. For best results, add “C++” to your search query.  " };
		skillsText[1] = { "This Debugging Skill involves placing print or cout statements throughout the code to act as checkpoints. The print/cout statements should contain important variables and they should be places at points in the code where the variables are expected to change. By doing this, it is possible to monitor variables and ensure they are behaving as expected. Examples of variables that should be monitored with print statements are increment variables (most commonly called “i”) and variables in an equation. Given that variables a, b and c are present in the following equation a = b + c; variables a, b, and c should have print statements to monitor their values if they are not behaving as expected. " };
		skillsText[2] = { "This Debugging Skill involves using a Debugger. A Debugger is a tool that can be found in an IDE or it can be a separate program. Debuggers often have breakpoints, “step into” commands, and inspect tools. Breakpoints allow you to suspend your code at a certain point, making it easy to look at the values of variables and which lines of code are being run at specific points in the code. “Step into” commands are used travel the code one line at a time. And the inspect tool is used to look at the property value of objects and variables in the code.  " };
		this->textBox1->Text = skillsText[i];
	}
		   //return buttons resets application
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Restart();
	}
		   //Foward button cycles through skills
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (i < 2) {
			i++;
		}
		else if (i >= 2) {
			i = 0;
		}
		array<String^>^ skillsTitle = gcnew array<String^>(9);
		skillsTitle[0] = { "Google it" };
		skillsTitle[1] = { "Brute Force" };
		skillsTitle[2] = { "Debugger Tool" };
		this->label2->Text = skillsTitle[i];

		array<String^>^ skillsText = gcnew array<String^>(9);
		skillsText[0] = { "This Debugging Skill involves using the google search engine to look for solutions to problems that may have already been answered by other programmers. If there is an issue with your code, it is likely that others have had the same or similar issues as well and have had their issues resolved. From there, it is just a matter of incorporating that solution into your code. For best results, add “C++” to your search query.  " };
		skillsText[1] = { "This Debugging Skill involves placing print or cout statements throughout the code to act as checkpoints. The print/cout statements should contain important variables and they should be places at points in the code where the variables are expected to change. By doing this, it is possible to monitor variables and ensure they are behaving as expected. Examples of variables that should be monitored with print statements are increment variables (most commonly called “i”) and variables in an equation. Given that variables a, b and c are present in the following equation a = b + c; variables a, b, and c should have print statements to monitor their values if they are not behaving as expected. " };
		skillsText[2] = { "This Debugging Skill involves using a Debugger. A Debugger is a tool that can be found in an IDE or it can be a separate program. Debuggers often have breakpoints, “step into” commands, and inspect tools. Breakpoints allow you to suspend your code at a certain point, making it easy to look at the values of variables and which lines of code are being run at specific points in the code. “Step into” commands are used travel the code one line at a time. And the inspect tool is used to look at the property value of objects and variables in the code.  " };
		this->textBox1->Text = skillsText[i];
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
