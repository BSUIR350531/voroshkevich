#pragma once

namespace SchemeDrawDialog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for textDialogForm
	/// </summary>
	public ref class textDialogForm : public System::Windows::Forms::Form
	{
	public:
		textDialogForm(void)
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
		~textDialogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  txtResult;
	protected:

	private: System::Windows::Forms::Button^  addTextBtn;
	private: System::Windows::Forms::Button^  cancelBtn;
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
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->addTextBtn = (gcnew System::Windows::Forms::Button());
			this->cancelBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(22, 34);
			this->txtResult->MaxLength = 20;
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(158, 20);
			this->txtResult->TabIndex = 0;
			// 
			// addTextBtn
			// 
			this->addTextBtn->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->addTextBtn->Location = System::Drawing::Point(22, 72);
			this->addTextBtn->Name = L"addTextBtn";
			this->addTextBtn->Size = System::Drawing::Size(82, 23);
			this->addTextBtn->TabIndex = 1;
			this->addTextBtn->Text = L"Добавить";
			this->addTextBtn->UseVisualStyleBackColor = true;
			// 
			// cancelBtn
			// 
			this->cancelBtn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelBtn->Location = System::Drawing::Point(123, 72);
			this->cancelBtn->Name = L"cancelBtn";
			this->cancelBtn->Size = System::Drawing::Size(57, 23);
			this->cancelBtn->TabIndex = 2;
			this->cancelBtn->Text = L"Отмена";
			this->cancelBtn->UseVisualStyleBackColor = true;
			// 
			// textDialogForm
			// 
			this->AcceptButton = this->addTextBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(199, 117);
			this->Controls->Add(this->cancelBtn);
			this->Controls->Add(this->addTextBtn);
			this->Controls->Add(this->txtResult);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"textDialogForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Надпись на схеме";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
