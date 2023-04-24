#include "main.h"

namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для loading_screen
	/// </summary>
	public ref class loading_screen : public System::Windows::Forms::Form
	{
	public:
		loading_screen(void)
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
		~loading_screen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ loading_label;
	protected:
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer3;

	private: main^ _form;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loading_screen::typeid));
			this->loading_label = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// loading_label
			// 
			this->loading_label->AutoSize = true;
			this->loading_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loading_label->Location = System::Drawing::Point(9, 9);
			this->loading_label->Name = L"loading_label";
			this->loading_label->Size = System::Drawing::Size(210, 13);
			this->loading_label->TabIndex = 3;
			this->loading_label->Text = L"Загрузка компонентов WI-FI Fixer";
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->progressBar1->Location = System::Drawing::Point(12, 25);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(240, 24);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 4;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &loading_screen::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 600;
			this->timer2->Tick += gcnew System::EventHandler(this, &loading_screen::timer2_Tick);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(177, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 25);
			this->button1->TabIndex = 5;
			this->button1->TabStop = false;
			this->button1->Text = L"Отмена";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &loading_screen::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"By.\r\nLonewolf239";
			// 
			// timer3
			// 
			this->timer3->Interval = 1375;
			this->timer3->Tick += gcnew System::EventHandler(this, &loading_screen::timer3_Tick);
			// 
			// loading_screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(260, 88);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->loading_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loading_screen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Загрузка WI-FI Fixer";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &loading_screen::loading_screen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->progressBar1->Value < 20)
			this->progressBar1->Increment(rand() % 5);
		else if (this->progressBar1->Value > 20 && this->progressBar1->Value < 38)
			this->progressBar1->Increment(18);
		else if (this->progressBar1->Value > 38 && this->progressBar1->Value < 67)
			this->progressBar1->Increment(rand() % 6);
		else if (this->progressBar1->Value == 85) {
			this->timer1->Stop();
			this->timer3->Start();
		}
		else
			this->progressBar1->Increment(rand() % 3);
		if (this->progressBar1->Value == 100) {
			this->timer2->Start();
			this->timer1->Stop();
		}
	}
	private: System::Void loading_screen_Load(System::Object^ sender, System::EventArgs^ e) {
		_form = gcnew main();
		_form->WindowState = System::Windows::Forms::FormWindowState::Minimized;
		_form->ShowInTaskbar = false;
		_form->Show();
		this->timer1->Start();
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		loading_screen::Hide();
		_form->WindowState = System::Windows::Forms::FormWindowState::Normal;
		_form->ShowInTaskbar = true;
		this->timer2->Stop();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar1->Increment(1);
		this->timer3->Stop();
		this->timer1->Start();
	}
};
}