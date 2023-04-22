#pragma once

namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для hacking
	/// </summary>
	public ref class hacking : public System::Windows::Forms::Form
	{
	public:
		hacking(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~hacking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ProgressBar^ cookieBAR;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ProgressBar^ passwordBAR;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ProgressBar^ informationBAR;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ProgressBar^ paypalBAR;
	private: System::Windows::Forms::Timer^ cookieTIMER;
	private: System::Windows::Forms::Timer^ passwordTIMER;
	private: System::Windows::Forms::Timer^ infoTIMER;
	private: System::Windows::Forms::Timer^ paypalTIMER;
	private: System::Windows::Forms::Label^ cookie_done;
	private: System::Windows::Forms::Label^ password_done;
	private: System::Windows::Forms::Label^ info_done;
	private: System::Windows::Forms::Label^ paypal_done;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(hacking::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cookieBAR = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passwordBAR = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->informationBAR = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->paypalBAR = (gcnew System::Windows::Forms::ProgressBar());
			this->cookieTIMER = (gcnew System::Windows::Forms::Timer(this->components));
			this->passwordTIMER = (gcnew System::Windows::Forms::Timer(this->components));
			this->infoTIMER = (gcnew System::Windows::Forms::Timer(this->components));
			this->paypalTIMER = (gcnew System::Windows::Forms::Timer(this->components));
			this->cookie_done = (gcnew System::Windows::Forms::Label());
			this->password_done = (gcnew System::Windows::Forms::Label());
			this->info_done = (gcnew System::Windows::Forms::Label());
			this->paypal_done = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Поиск и сбор Cookie:";
			// 
			// cookieBAR
			// 
			this->cookieBAR->Location = System::Drawing::Point(12, 25);
			this->cookieBAR->Name = L"cookieBAR";
			this->cookieBAR->Size = System::Drawing::Size(441, 15);
			this->cookieBAR->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Поиск и сбор паролей:";
			// 
			// passwordBAR
			// 
			this->passwordBAR->Location = System::Drawing::Point(12, 59);
			this->passwordBAR->Maximum = 1500;
			this->passwordBAR->Name = L"passwordBAR";
			this->passwordBAR->Size = System::Drawing::Size(441, 15);
			this->passwordBAR->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Поиск и сбор личной информации:";
			// 
			// informationBAR
			// 
			this->informationBAR->Location = System::Drawing::Point(12, 93);
			this->informationBAR->Maximum = 2500;
			this->informationBAR->Name = L"informationBAR";
			this->informationBAR->Size = System::Drawing::Size(441, 15);
			this->informationBAR->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Поиск и сбор платёжных данных:";
			// 
			// paypalBAR
			// 
			this->paypalBAR->Location = System::Drawing::Point(12, 127);
			this->paypalBAR->Maximum = 1350;
			this->paypalBAR->Name = L"paypalBAR";
			this->paypalBAR->Size = System::Drawing::Size(441, 15);
			this->paypalBAR->TabIndex = 10;
			// 
			// cookieTIMER
			// 
			this->cookieTIMER->Tick += gcnew System::EventHandler(this, &hacking::cookieTIMER_Tick);
			// 
			// passwordTIMER
			// 
			this->passwordTIMER->Tick += gcnew System::EventHandler(this, &hacking::passwordTIMER_Tick);
			// 
			// infoTIMER
			// 
			this->infoTIMER->Tick += gcnew System::EventHandler(this, &hacking::infoTIMER_Tick);
			// 
			// paypalTIMER
			// 
			this->paypalTIMER->Tick += gcnew System::EventHandler(this, &hacking::paypalTIMER_Tick);
			// 
			// cookie_done
			// 
			this->cookie_done->AutoSize = true;
			this->cookie_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cookie_done->ForeColor = System::Drawing::SystemColors::ControlText;
			this->cookie_done->Location = System::Drawing::Point(152, 9);
			this->cookie_done->Name = L"cookie_done";
			this->cookie_done->Size = System::Drawing::Size(104, 13);
			this->cookie_done->TabIndex = 12;
			this->cookie_done->Text = L"ВЫПОЛНЯЕТСЯ";
			// 
			// password_done
			// 
			this->password_done->AutoSize = true;
			this->password_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->password_done->Location = System::Drawing::Point(162, 43);
			this->password_done->Name = L"password_done";
			this->password_done->Size = System::Drawing::Size(104, 13);
			this->password_done->TabIndex = 13;
			this->password_done->Text = L"ВЫПОЛНЯЕТСЯ";
			// 
			// info_done
			// 
			this->info_done->AutoSize = true;
			this->info_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->info_done->Location = System::Drawing::Point(232, 77);
			this->info_done->Name = L"info_done";
			this->info_done->Size = System::Drawing::Size(104, 13);
			this->info_done->TabIndex = 14;
			this->info_done->Text = L"ВЫПОЛНЯЕТСЯ";
			// 
			// paypal_done
			// 
			this->paypal_done->AutoSize = true;
			this->paypal_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->paypal_done->Location = System::Drawing::Point(225, 111);
			this->paypal_done->Name = L"paypal_done";
			this->paypal_done->Size = System::Drawing::Size(104, 13);
			this->paypal_done->TabIndex = 15;
			this->paypal_done->Text = L"ВЫПОЛНЯЕТСЯ";
			// 
			// hacking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(465, 147);
			this->ControlBox = false;
			this->Controls->Add(this->paypal_done);
			this->Controls->Add(this->info_done);
			this->Controls->Add(this->password_done);
			this->Controls->Add(this->cookie_done);
			this->Controls->Add(this->paypalBAR);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->informationBAR);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->passwordBAR);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cookieBAR);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"hacking";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"Сбор личной информации";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &hacking::hacking_FormClosing);
			this->Load += gcnew System::EventHandler(this, &hacking::hacking_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void hacking_Load(System::Object^ sender, System::EventArgs^ e) {
		this->cookieTIMER->Start();
		this->passwordTIMER->Start();
		this->infoTIMER->Start();
		this->paypalTIMER->Start();
		this->Location = Point(0, Screen::PrimaryScreen->WorkingArea.Height - this->Height);
	}
	private: System::Void hacking_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel;
	}
	private: System::Void paypalTIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->paypalBAR->Value < 666)
			this->paypalBAR->Increment(rand() % 7);
		else if (this->paypalBAR->Value > 700 && this->paypalBAR->Value < 1250)
			this->paypalBAR->Increment(rand() % 5);
		else
			this->paypalBAR->Increment(rand() % 3);
		if (this->paypalBAR->Value == 1350) {
			this->paypal_done->Text = "ВЫПОЛНЕНО!";
			this->paypal_done->ForeColor = System::Drawing::Color::LimeGreen;
			paypal_did = true;
			paypalTIMER->Stop();
		}
	}
	private: System::Void passwordTIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->passwordBAR->Value < 780)
			this->passwordBAR->Increment(rand() % 7);
		else if (this->passwordBAR->Value > 780 && this->passwordBAR->Value < 1290)
			this->passwordBAR->Increment(rand() % 3);
		else
			this->passwordBAR->Increment(rand() % 5);
		if (this->passwordBAR->Value == 1500) {
			this->password_done->Text = "ВЫПОЛНЕНО!";
			this->password_done->ForeColor = System::Drawing::Color::LimeGreen;
			password_did = true;
			passwordTIMER->Stop();
		}
	}
	private: System::Void infoTIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->informationBAR->Value < 740)
			this->informationBAR->Increment(rand() % 7);
		else if (this->informationBAR->Value > 740 && this->informationBAR->Value < 1720)
			this->informationBAR->Increment(rand() % 4);
		else if (this->informationBAR->Value > 1720 && this->informationBAR->Value < 2420)
			this->informationBAR->Increment(rand() % 8);
		else
			this->informationBAR->Increment(rand() % 3);
		if (this->informationBAR->Value == 2500) {
			this->info_done->Text = "ВЫПОЛНЕНО!";
			this->info_done->ForeColor = System::Drawing::Color::LimeGreen;
			info_did = true;
			infoTIMER->Stop();
		}
	}
	private: System::Void cookieTIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->cookieBAR->Value < 50)
			this->cookieBAR->Increment(rand() % 5);
		else if (this->cookieBAR->Value > 50 && this->cookieBAR->Value < 79)
			this->cookieBAR->Increment(rand() % 7);
		else
			this->cookieBAR->Increment(rand() % 2);
		if (this->cookieBAR->Value == 100) {
			this->cookie_done->Text = "ВЫПОЛНЕНО!";
			this->cookie_done->ForeColor = System::Drawing::Color::LimeGreen;
			cookie_did = true;
			cookieTIMER->Stop();
		}
	}
	};
}