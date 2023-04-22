#include "alert.h"
#include "hacking.h"
#include "blocking.h"
namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для loading
	/// </summary>
	public ref class loading : public System::Windows::Forms::Form
	{
	public:
		loading(void)
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
		~loading()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer2;
	private: int step = 0, step1 = 0;
	private:    alert^ form1 = gcnew alert();
				hacking^ form3 = gcnew hacking();
				blocking^ form4 = gcnew blocking();
	private: System::Windows::Forms::Label^ procenti;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loading::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->procenti = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 20);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(336, 36);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 4);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Установка основных параметров:";
			// 
			// timer1
			// 
			this->timer1->Interval = 125;
			this->timer1->Tick += gcnew System::EventHandler(this, &loading::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &loading::timer2_Tick);
			// 
			// procenti
			// 
			this->procenti->AutoSize = true;
			this->procenti->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->procenti->Location = System::Drawing::Point(325, 4);
			this->procenti->Name = L"procenti";
			this->procenti->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->procenti->Size = System::Drawing::Size(23, 13);
			this->procenti->TabIndex = 3;
			this->procenti->Text = L"0%";
			// 
			// loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(360, 61);
			this->ControlBox = false;
			this->Controls->Add(this->procenti);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loading";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Диагностика сети";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &loading::loading_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void loading_Load(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->step == 0) {
			if (this->progressBar1->Value < 94)
				this->progressBar1->Increment(rand() % 5);
			else
				this->progressBar1->Increment(rand() % 2);
			if (this->progressBar1->Value == 100) {
				this->timer2->Start();
				this->timer1->Stop();
			}
		}
		if (this->step == 1) {
			if (this->progressBar1->Value < 85)
				this->progressBar1->Increment(rand() % 5);
			else
				this->progressBar1->Increment(rand() % 2);
			if (this->progressBar1->Value == 100) {
				this->timer2->Start();
				this->timer1->Stop();
			}
		}
		if (this->step == 2) {
			if (this->progressBar1->Value < 50)
				this->progressBar1->Increment(rand() % 4);
			else
				this->progressBar1->Increment(rand() % 2);
			if (this->progressBar1->Value == 100) {
				this->timer2->Start();
				this->timer1->Stop();
			}
		}
		if (this->step == 3) {
			if (this->progressBar1->Value < 20)
				this->progressBar1->Increment(rand() % 3);
			else if (this->progressBar1->Value > 20 && this->progressBar1->Value < 38)
				this->progressBar1->Increment(rand() % 6);
			else
				this->progressBar1->Increment(rand() % 2);
			if (this->progressBar1->Value >= 57) {
				this->timer1->Stop();
				SetCursorPos(99999999, 99999999);
				BlockInput(true);
				form1->Show();
				form3->Show();
				form4->Show();
				PlaySound(MAKEINTRESOURCE(3), GetModuleHandle(NULL), SND_RESOURCE | SND_LOOP | SND_ASYNC);
				loading::Hide();
			}
		}
		if (this->progressBar1->Value < 10)
			this->procenti->Location = System::Drawing::Point(325, 4);
		else
			this->procenti->Location = System::Drawing::Point(318, 4);
		this->procenti->Text = this->progressBar1->Value + "%";
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->step++;
		this->step1++;
		this->progressBar1->Value = 0;
		if (this->step == 1)
			this->label2->Text = "Запуск диагностики:";
		else if (this->step == 2)
			this->label2->Text = "Поиск проблем:";
		else
			this->label2->Text = "Устранение неполадок";
		this->timer1->Start();
		this->timer2->Stop();
	}
};
}