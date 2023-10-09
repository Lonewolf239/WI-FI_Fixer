#include "info.h"

namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для developer
	/// </summary>
	public ref class developer : public System::Windows::Forms::Form
	{
	public:
		developer(void)
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
		~developer()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ panel1_1;
	private: System::Windows::Forms::Button^ dis_btn;
	protected: Point lastLocation;

	private: System::Windows::Forms::Button^ git_btn;
	private: System::Windows::Forms::Button^ teg_btn;
	private: System::Windows::Forms::Label^ exit_btn;
	private: bool exit_right = false;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Label^ name_prog1;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(developer::typeid));
			   this->panel1_1 = (gcnew System::Windows::Forms::Panel());
			   this->exit_btn = (gcnew System::Windows::Forms::Label());
			   this->name_prog1 = (gcnew System::Windows::Forms::Label());
			   this->dis_btn = (gcnew System::Windows::Forms::Button());
			   this->git_btn = (gcnew System::Windows::Forms::Button());
			   this->teg_btn = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->panel1_1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // panel1_1
			   // 
			   this->panel1_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				   static_cast<System::Int32>(static_cast<System::Byte>(115)));
			   this->panel1_1->Controls->Add(this->exit_btn);
			   this->panel1_1->Controls->Add(this->name_prog1);
			   this->panel1_1->Location = System::Drawing::Point(0, 0);
			   this->panel1_1->Name = L"panel1_1";
			   this->panel1_1->Size = System::Drawing::Size(200, 30);
			   this->panel1_1->TabIndex = 0;
			   this->panel1_1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseDown);
			   this->panel1_1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseMove);
			   this->panel1_1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseUp);
			   // 
			   // exit_btn
			   // 
			   this->exit_btn->Cursor = System::Windows::Forms::Cursors::Default;
			   this->exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->exit_btn->ForeColor = System::Drawing::Color::Silver;
			   this->exit_btn->Location = System::Drawing::Point(170, 0);
			   this->exit_btn->Name = L"exit_btn";
			   this->exit_btn->Size = System::Drawing::Size(30, 30);
			   this->exit_btn->TabIndex = 2;
			   this->exit_btn->Text = L"X";
			   this->exit_btn->Click += gcnew System::EventHandler(this, &developer::exit_btn_Click);
			   this->exit_btn->MouseEnter += gcnew System::EventHandler(this, &developer::exit_btn_MouseEnter);
			   this->exit_btn->MouseLeave += gcnew System::EventHandler(this, &developer::exit_btn_MouseLeave);
			   // 
			   // name_prog1
			   // 
			   this->name_prog1->AutoSize = true;
			   this->name_prog1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				   static_cast<System::Int32>(static_cast<System::Byte>(115)));
			   this->name_prog1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->name_prog1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->name_prog1->ForeColor = System::Drawing::Color::White;
			   this->name_prog1->Location = System::Drawing::Point(0, 4);
			   this->name_prog1->Name = L"name_prog1";
			   this->name_prog1->Size = System::Drawing::Size(132, 22);
			   this->name_prog1->TabIndex = 0;
			   this->name_prog1->Text = L"О Разработчике:";
			   this->name_prog1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->name_prog1->UseCompatibleTextRendering = true;
			   this->name_prog1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseDown);
			   this->name_prog1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseMove);
			   this->name_prog1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseUp);
			   // 
			   // dis_btn
			   // 
			   this->dis_btn->BackColor = System::Drawing::Color::MediumSpringGreen;
			   this->dis_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->dis_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->dis_btn->ForeColor = System::Drawing::Color::Black;
			   this->dis_btn->Location = System::Drawing::Point(13, 35);
			   this->dis_btn->Name = L"dis_btn";
			   this->dis_btn->Size = System::Drawing::Size(176, 30);
			   this->dis_btn->TabIndex = 10;
			   this->dis_btn->TabStop = false;
			   this->dis_btn->Text = L"Оформить заказ";
			   this->dis_btn->UseCompatibleTextRendering = true;
			   this->dis_btn->UseVisualStyleBackColor = false;
			   this->dis_btn->Click += gcnew System::EventHandler(this, &developer::dis_btn_Click);
			   // 
			   // git_btn
			   // 
			   this->git_btn->BackColor = System::Drawing::Color::MediumSpringGreen;
			   this->git_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->git_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->git_btn->ForeColor = System::Drawing::Color::Black;
			   this->git_btn->Location = System::Drawing::Point(12, 105);
			   this->git_btn->Name = L"git_btn";
			   this->git_btn->Size = System::Drawing::Size(86, 30);
			   this->git_btn->TabIndex = 12;
			   this->git_btn->TabStop = false;
			   this->git_btn->Text = L"GitHub";
			   this->git_btn->UseCompatibleTextRendering = true;
			   this->git_btn->UseVisualStyleBackColor = false;
			   this->git_btn->Click += gcnew System::EventHandler(this, &developer::git_btn_Click);
			   // 
			   // teg_btn
			   // 
			   this->teg_btn->BackColor = System::Drawing::Color::MediumSpringGreen;
			   this->teg_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->teg_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			   this->teg_btn->ForeColor = System::Drawing::Color::Black;
			   this->teg_btn->Location = System::Drawing::Point(104, 105);
			   this->teg_btn->Name = L"teg_btn";
			   this->teg_btn->Size = System::Drawing::Size(86, 30);
			   this->teg_btn->TabIndex = 13;
			   this->teg_btn->TabStop = false;
			   this->teg_btn->Text = L"Telegram";
			   this->teg_btn->UseCompatibleTextRendering = true;
			   this->teg_btn->UseVisualStyleBackColor = false;
			   this->teg_btn->Click += gcnew System::EventHandler(this, &developer::teg_btn_Click);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::MediumSpringGreen;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->ForeColor = System::Drawing::Color::Black;
			   this->button1->Location = System::Drawing::Point(12, 70);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(176, 30);
			   this->button1->TabIndex = 14;
			   this->button1->TabStop = false;
			   this->button1->Text = L"Bug Report";
			   this->button1->UseCompatibleTextRendering = true;
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &developer::button1_Click);
			   // 
			   // developer
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(145)));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->ClientSize = System::Drawing::Size(200, 142);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->teg_btn);
			   this->Controls->Add(this->git_btn);
			   this->Controls->Add(this->dis_btn);
			   this->Controls->Add(this->panel1_1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"developer";
			   this->ShowInTaskbar = false;
			   this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			   this->Text = L"Программа \"Всё В Одном\"";
			   this->TopMost = true;
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &developer::developer_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &developer::developer_Load);
			   this->panel1_1->ResumeLayout(false);
			   this->panel1_1->PerformLayout();
			   this->ResumeLayout(false);

		   }
	private: System::Void git_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://github.com/Lonewolf239");
	}
	private: System::Void teg_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void dis_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_OrderBOT");
	}
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		_form1_opened = false;
		this->exit_right = true;
		this->Close();
	}
	private: System::Void exit_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void exit_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
			static_cast<System::Int32>(static_cast<System::Byte>(115)));
	}
	private: System::Void developer_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->exit_right)
			PlaySound(MAKEINTRESOURCE(2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
	}
	private: System::Void developer_Load(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(MAKEINTRESOURCE(1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
	}
	private: System::Void panel1_1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastLocation = e->Location;
	}
	private: System::Void panel1_1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->name_prog1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->panel1_1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Location = Point(
				this->Location.X + e->X - lastLocation.X,
				this->Location.Y + e->Y - lastLocation.Y);
		}
	}
	private: System::Void panel1_1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->panel1_1->Cursor = System::Windows::Forms::Cursors::Default;
		this->name_prog1->Cursor = System::Windows::Forms::Cursors::Default;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_BugReportBOT");
	}
	};
}