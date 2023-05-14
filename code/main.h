#include "developer.h"
#include "loading.h"
#include <windows.h>

namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: loading^ _form;
	private: developer^ _form1;
	protected: Point lastPosition;
	private: System::Windows::Forms::Label^ min_btn;
	private: System::Windows::Forms::Label^ ext_btn;
	private: System::Windows::Forms::Label^ dev_btn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ prog_name;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->min_btn = (gcnew System::Windows::Forms::Label());
			this->ext_btn = (gcnew System::Windows::Forms::Label());
			this->dev_btn = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->prog_name = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->min_btn);
			this->panel1->Controls->Add(this->ext_btn);
			this->panel1->Controls->Add(this->dev_btn);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->prog_name);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(300, 30);
			this->panel1->TabIndex = 0;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseUp);
			// 
			// min_btn
			// 
			this->min_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->min_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->min_btn->ForeColor = System::Drawing::Color::Silver;
			this->min_btn->Location = System::Drawing::Point(240, 0);
			this->min_btn->Name = L"min_btn";
			this->min_btn->Size = System::Drawing::Size(30, 30);
			this->min_btn->TabIndex = 2;
			this->min_btn->Text = L"—";
			this->min_btn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->min_btn->Click += gcnew System::EventHandler(this, &main::min_btn_Click);
			this->min_btn->MouseEnter += gcnew System::EventHandler(this, &main::min_btn_MouseEnter);
			this->min_btn->MouseLeave += gcnew System::EventHandler(this, &main::min_btn_MouseLeave);
			// 
			// ext_btn
			// 
			this->ext_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ext_btn->BackColor = System::Drawing::Color::Black;
			this->ext_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ext_btn->ForeColor = System::Drawing::Color::Silver;
			this->ext_btn->Location = System::Drawing::Point(270, 0);
			this->ext_btn->Name = L"ext_btn";
			this->ext_btn->Size = System::Drawing::Size(30, 30);
			this->ext_btn->TabIndex = 3;
			this->ext_btn->Text = L"X";
			this->ext_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ext_btn->Click += gcnew System::EventHandler(this, &main::ext_btn_Click);
			this->ext_btn->MouseEnter += gcnew System::EventHandler(this, &main::ext_btn_MouseEnter);
			this->ext_btn->MouseLeave += gcnew System::EventHandler(this, &main::ext_btn_MouseLeave);
			// 
			// dev_btn
			// 
			this->dev_btn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dev_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dev_btn->ForeColor = System::Drawing::Color::Silver;
			this->dev_btn->Location = System::Drawing::Point(210, 0);
			this->dev_btn->Name = L"dev_btn";
			this->dev_btn->Size = System::Drawing::Size(30, 30);
			this->dev_btn->TabIndex = 1;
			this->dev_btn->Text = L"\?";
			this->dev_btn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->dev_btn->Click += gcnew System::EventHandler(this, &main::dev_btn_Click);
			this->dev_btn->MouseEnter += gcnew System::EventHandler(this, &main::dev_btn_MouseEnter);
			this->dev_btn->MouseLeave += gcnew System::EventHandler(this, &main::dev_btn_MouseLeave);
			this->dev_btn->MouseHover += gcnew System::EventHandler(this, &main::dev_btn_MouseHover);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 30);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseUp);
			// 
			// prog_name
			// 
			this->prog_name->AutoSize = true;
			this->prog_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prog_name->ForeColor = System::Drawing::Color::White;
			this->prog_name->Location = System::Drawing::Point(30, 1);
			this->prog_name->Name = L"prog_name";
			this->prog_name->Size = System::Drawing::Size(141, 29);
			this->prog_name->TabIndex = 0;
			this->prog_name->Text = L"WI-FI Fixer";
			this->prog_name->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseDown);
			this->prog_name->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseMove);
			this->prog_name->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_MouseUp);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DimGray;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(12, 36);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(278, 96);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(282, 96);
			this->label1->TabIndex = 1;
			this->label1->Text = L"WI-FI Fixer — это простая программа для диагностики неполадок сети и их исправлен"
				L"ия";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(144, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 50);
			this->button1->TabIndex = 2;
			this->button1->TabStop = false;
			this->button1->Text = L"Запустить \r\nдиагностику сети";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 48);
			this->label2->TabIndex = 3;
			this->label2->Text = L"By.\r\nLonewolf239";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(93, 138);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label3->Size = System::Drawing::Size(48, 26);
			this->label3->TabIndex = 4;
			this->label3->Text = L"100%\r\noriginal";
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->ClientSize = System::Drawing::Size(300, 195);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WI-FI Fixer";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ext_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void min_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		PlaySound(nullptr, nullptr, 0);
		PlaySound(MAKEINTRESOURCE(4), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
		SetWindowPos((HWND)this->Handle.ToPointer(), HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		AnimateWindow((HWND)this->Handle.ToPointer(), 325, AW_HIDE | AW_BLEND);
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void dev_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!_form1_opened) {
			_form1 = gcnew developer;
			int xPos = (this->Width - _form1->Width) / 2 + this->Location.X;
			int yPos = (this->Height - _form1->Height) / 2 + this->Location.Y;
			_form1->Location = System::Drawing::Point(xPos, yPos);
			_form1->Show();
			_form1_opened = true;
		}
	}
	private: System::Void ext_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->ext_btn->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void ext_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->ext_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void min_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->min_btn->BackColor = System::Drawing::Color::LightGray;
	}
	private: System::Void min_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->min_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void dev_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->dev_btn->BackColor = System::Drawing::Color::LightGray;
	}
	private: System::Void dev_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->dev_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void dev_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ g = gcnew ToolTip();
		g->SetToolTip(dev_btn, "О Разработчике");
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		_form = gcnew loading;
		_form->Show();
		if (_form1)
			_form1->Close();
		main::Hide();
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastPosition = e->Location;
	}
	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->prog_name->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->panel1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Location = Point(
				this->Location.X + e->X - lastPosition.X,
				this->Location.Y + e->Y - lastPosition.Y);
		}
	}
	private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->prog_name->Cursor = System::Windows::Forms::Cursors::Default;
		this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
		this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
	}
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
		this->TopMost = false;
	}
};
}