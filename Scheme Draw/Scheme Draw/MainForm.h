#include <stddef.h>
#include <Windows.h>
#include <math.h>
#include "textDialogForm.h"

using namespace std;
using namespace System::Drawing;

#pragma once

namespace SchemeDraw
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  mainPB;
	private: System::Windows::Forms::Panel^  elemPanel;
	private: System::Windows::Forms::Button^  vResistorBtn;
	private: System::Windows::Forms::Button^  hCapacitorBtn;

	private: System::Windows::Forms::Button^  vCapacitorBtn;



	private: System::Windows::Forms::Button^  hResistorBtn;
	private: System::Windows::Forms::Button^  vPnpBtn;

	private: System::Windows::Forms::Button^  hPnpBtn;
	private: System::Windows::Forms::Button^  vNpnBtn;


	private: System::Windows::Forms::Button^  hNpnBtn;

	private: System::Windows::Forms::Button^  vInductorBtn;

	private: System::Windows::Forms::Button^  hInductorBtn;


	private: System::Windows::Forms::Button^  vDiodBtn;
	private: System::Windows::Forms::Button^  hDiodBtn;
	private: System::Windows::Forms::Button^  vGroundBtn;

	private: System::Windows::Forms::Button^  hGroundBtn;
	private: System::Windows::Forms::Button^  lineBtn;




	protected:

	protected:






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// ��� ��� ����� ������������� �����
		const int STEP = 14;
		// ������ ����� ������ =  2 * STEP, ������ = 2 * STEP, ������ = STEP
		Point^ bLine;
		bool lineOn;
	private: System::Windows::Forms::PictureBox^  bckpPB;
	private: System::Windows::Forms::Button^  clrBrn;
	private: System::Windows::Forms::Button^  saveBtn;
	private: System::Windows::Forms::SaveFileDialog^  saveBmDialog;
	private: System::Windows::Forms::Button^  textBtn;


			 Bitmap^ bckpBm;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->mainPB = (gcnew System::Windows::Forms::PictureBox());
			this->elemPanel = (gcnew System::Windows::Forms::Panel());
			this->textBtn = (gcnew System::Windows::Forms::Button());
			this->clrBrn = (gcnew System::Windows::Forms::Button());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->lineBtn = (gcnew System::Windows::Forms::Button());
			this->vGroundBtn = (gcnew System::Windows::Forms::Button());
			this->hGroundBtn = (gcnew System::Windows::Forms::Button());
			this->vPnpBtn = (gcnew System::Windows::Forms::Button());
			this->hPnpBtn = (gcnew System::Windows::Forms::Button());
			this->vNpnBtn = (gcnew System::Windows::Forms::Button());
			this->hNpnBtn = (gcnew System::Windows::Forms::Button());
			this->vInductorBtn = (gcnew System::Windows::Forms::Button());
			this->hInductorBtn = (gcnew System::Windows::Forms::Button());
			this->vDiodBtn = (gcnew System::Windows::Forms::Button());
			this->hDiodBtn = (gcnew System::Windows::Forms::Button());
			this->vCapacitorBtn = (gcnew System::Windows::Forms::Button());
			this->hResistorBtn = (gcnew System::Windows::Forms::Button());
			this->vResistorBtn = (gcnew System::Windows::Forms::Button());
			this->hCapacitorBtn = (gcnew System::Windows::Forms::Button());
			this->bckpPB = (gcnew System::Windows::Forms::PictureBox());
			this->saveBmDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainPB))->BeginInit();
			this->elemPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bckpPB))->BeginInit();
			this->SuspendLayout();
			// 
			// mainPB
			// 
			this->mainPB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mainPB->BackColor = System::Drawing::Color::White;
			this->mainPB->Location = System::Drawing::Point(101, 0);
			this->mainPB->Name = L"mainPB";
			this->mainPB->Size = System::Drawing::Size(583, 412);
			this->mainPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mainPB->TabIndex = 0;
			this->mainPB->TabStop = false;
			this->mainPB->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::mainPB_MouseDown);
			this->mainPB->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::mainPB_MouseMove);
			this->mainPB->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::mainPB_MouseUp);
			// 
			// elemPanel
			// 
			this->elemPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->elemPanel->Controls->Add(this->textBtn);
			this->elemPanel->Controls->Add(this->clrBrn);
			this->elemPanel->Controls->Add(this->saveBtn);
			this->elemPanel->Controls->Add(this->lineBtn);
			this->elemPanel->Controls->Add(this->vGroundBtn);
			this->elemPanel->Controls->Add(this->hGroundBtn);
			this->elemPanel->Controls->Add(this->vPnpBtn);
			this->elemPanel->Controls->Add(this->hPnpBtn);
			this->elemPanel->Controls->Add(this->vNpnBtn);
			this->elemPanel->Controls->Add(this->hNpnBtn);
			this->elemPanel->Controls->Add(this->vInductorBtn);
			this->elemPanel->Controls->Add(this->hInductorBtn);
			this->elemPanel->Controls->Add(this->vDiodBtn);
			this->elemPanel->Controls->Add(this->hDiodBtn);
			this->elemPanel->Controls->Add(this->vCapacitorBtn);
			this->elemPanel->Controls->Add(this->hResistorBtn);
			this->elemPanel->Controls->Add(this->vResistorBtn);
			this->elemPanel->Controls->Add(this->hCapacitorBtn);
			this->elemPanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->elemPanel->Location = System::Drawing::Point(0, 0);
			this->elemPanel->Name = L"elemPanel";
			this->elemPanel->Size = System::Drawing::Size(100, 412);
			this->elemPanel->TabIndex = 1;
			// 
			// textBtn
			// 
			this->textBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"textBtn.Image")));
			this->textBtn->Location = System::Drawing::Point(48, 352);
			this->textBtn->Name = L"textBtn";
			this->textBtn->Size = System::Drawing::Size(40, 40);
			this->textBtn->TabIndex = 17;
			this->textBtn->UseVisualStyleBackColor = true;
			this->textBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// clrBrn
			// 
			this->clrBrn->Location = System::Drawing::Point(9, 40);
			this->clrBrn->Name = L"clrBrn";
			this->clrBrn->Size = System::Drawing::Size(79, 27);
			this->clrBrn->TabIndex = 16;
			this->clrBrn->Text = L"��������";
			this->clrBrn->UseVisualStyleBackColor = true;
			this->clrBrn->Click += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			// 
			// saveBtn
			// 
			this->saveBtn->Location = System::Drawing::Point(9, 10);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(79, 27);
			this->saveBtn->TabIndex = 15;
			this->saveBtn->Text = L"���������...";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &MainForm::saveBtn_Click);
			// 
			// lineBtn
			// 
			this->lineBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lineBtn.Image")));
			this->lineBtn->Location = System::Drawing::Point(9, 352);
			this->lineBtn->Name = L"lineBtn";
			this->lineBtn->Size = System::Drawing::Size(40, 40);
			this->lineBtn->TabIndex = 14;
			this->lineBtn->UseVisualStyleBackColor = true;
			this->lineBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vGroundBtn
			// 
			this->vGroundBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vGroundBtn.Image")));
			this->vGroundBtn->Location = System::Drawing::Point(48, 313);
			this->vGroundBtn->Name = L"vGroundBtn";
			this->vGroundBtn->Size = System::Drawing::Size(40, 40);
			this->vGroundBtn->TabIndex = 13;
			this->vGroundBtn->UseVisualStyleBackColor = true;
			this->vGroundBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hGroundBtn
			// 
			this->hGroundBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hGroundBtn.Image")));
			this->hGroundBtn->Location = System::Drawing::Point(9, 313);
			this->hGroundBtn->Name = L"hGroundBtn";
			this->hGroundBtn->Size = System::Drawing::Size(40, 40);
			this->hGroundBtn->TabIndex = 12;
			this->hGroundBtn->UseVisualStyleBackColor = true;
			this->hGroundBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vPnpBtn
			// 
			this->vPnpBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vPnpBtn.Image")));
			this->vPnpBtn->Location = System::Drawing::Point(48, 274);
			this->vPnpBtn->Name = L"vPnpBtn";
			this->vPnpBtn->Size = System::Drawing::Size(40, 40);
			this->vPnpBtn->TabIndex = 11;
			this->vPnpBtn->UseVisualStyleBackColor = true;
			this->vPnpBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hPnpBtn
			// 
			this->hPnpBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hPnpBtn.Image")));
			this->hPnpBtn->Location = System::Drawing::Point(9, 274);
			this->hPnpBtn->Name = L"hPnpBtn";
			this->hPnpBtn->Size = System::Drawing::Size(40, 40);
			this->hPnpBtn->TabIndex = 10;
			this->hPnpBtn->UseVisualStyleBackColor = true;
			this->hPnpBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vNpnBtn
			// 
			this->vNpnBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vNpnBtn.Image")));
			this->vNpnBtn->Location = System::Drawing::Point(48, 235);
			this->vNpnBtn->Name = L"vNpnBtn";
			this->vNpnBtn->Size = System::Drawing::Size(40, 40);
			this->vNpnBtn->TabIndex = 9;
			this->vNpnBtn->UseVisualStyleBackColor = true;
			this->vNpnBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hNpnBtn
			// 
			this->hNpnBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hNpnBtn.Image")));
			this->hNpnBtn->Location = System::Drawing::Point(9, 235);
			this->hNpnBtn->Name = L"hNpnBtn";
			this->hNpnBtn->Size = System::Drawing::Size(40, 40);
			this->hNpnBtn->TabIndex = 8;
			this->hNpnBtn->UseVisualStyleBackColor = true;
			this->hNpnBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vInductorBtn
			// 
			this->vInductorBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vInductorBtn.Image")));
			this->vInductorBtn->Location = System::Drawing::Point(48, 196);
			this->vInductorBtn->Name = L"vInductorBtn";
			this->vInductorBtn->Size = System::Drawing::Size(40, 40);
			this->vInductorBtn->TabIndex = 7;
			this->vInductorBtn->UseVisualStyleBackColor = true;
			this->vInductorBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hInductorBtn
			// 
			this->hInductorBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hInductorBtn.Image")));
			this->hInductorBtn->Location = System::Drawing::Point(9, 196);
			this->hInductorBtn->Name = L"hInductorBtn";
			this->hInductorBtn->Size = System::Drawing::Size(40, 40);
			this->hInductorBtn->TabIndex = 6;
			this->hInductorBtn->UseVisualStyleBackColor = true;
			this->hInductorBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vDiodBtn
			// 
			this->vDiodBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vDiodBtn.Image")));
			this->vDiodBtn->Location = System::Drawing::Point(48, 157);
			this->vDiodBtn->Name = L"vDiodBtn";
			this->vDiodBtn->Size = System::Drawing::Size(40, 40);
			this->vDiodBtn->TabIndex = 5;
			this->vDiodBtn->UseVisualStyleBackColor = true;
			this->vDiodBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hDiodBtn
			// 
			this->hDiodBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hDiodBtn.Image")));
			this->hDiodBtn->Location = System::Drawing::Point(9, 157);
			this->hDiodBtn->Name = L"hDiodBtn";
			this->hDiodBtn->Size = System::Drawing::Size(40, 40);
			this->hDiodBtn->TabIndex = 4;
			this->hDiodBtn->UseVisualStyleBackColor = true;
			this->hDiodBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vCapacitorBtn
			// 
			this->vCapacitorBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vCapacitorBtn.Image")));
			this->vCapacitorBtn->Location = System::Drawing::Point(48, 118);
			this->vCapacitorBtn->Name = L"vCapacitorBtn";
			this->vCapacitorBtn->Size = System::Drawing::Size(40, 40);
			this->vCapacitorBtn->TabIndex = 3;
			this->vCapacitorBtn->UseVisualStyleBackColor = true;
			this->vCapacitorBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hResistorBtn
			// 
			this->hResistorBtn->Enabled = false;
			this->hResistorBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hResistorBtn.Image")));
			this->hResistorBtn->Location = System::Drawing::Point(9, 79);
			this->hResistorBtn->Name = L"hResistorBtn";
			this->hResistorBtn->Size = System::Drawing::Size(40, 40);
			this->hResistorBtn->TabIndex = 0;
			this->hResistorBtn->UseVisualStyleBackColor = true;
			this->hResistorBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// vResistorBtn
			// 
			this->vResistorBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vResistorBtn.Image")));
			this->vResistorBtn->Location = System::Drawing::Point(48, 79);
			this->vResistorBtn->Name = L"vResistorBtn";
			this->vResistorBtn->Size = System::Drawing::Size(40, 40);
			this->vResistorBtn->TabIndex = 1;
			this->vResistorBtn->UseVisualStyleBackColor = true;
			this->vResistorBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// hCapacitorBtn
			// 
			this->hCapacitorBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hCapacitorBtn.Image")));
			this->hCapacitorBtn->Location = System::Drawing::Point(9, 118);
			this->hCapacitorBtn->Name = L"hCapacitorBtn";
			this->hCapacitorBtn->Size = System::Drawing::Size(40, 40);
			this->hCapacitorBtn->TabIndex = 2;
			this->hCapacitorBtn->UseVisualStyleBackColor = true;
			this->hCapacitorBtn->Click += gcnew System::EventHandler(this, &MainForm::elemBtn_Click);
			// 
			// bckpPB
			// 
			this->bckpPB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bckpPB->BackColor = System::Drawing::Color::White;
			this->bckpPB->Location = System::Drawing::Point(101, 0);
			this->bckpPB->Name = L"bckpPB";
			this->bckpPB->Size = System::Drawing::Size(583, 412);
			this->bckpPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->bckpPB->TabIndex = 2;
			this->bckpPB->TabStop = false;
			// 
			// saveBmDialog
			// 
			this->saveBmDialog->DefaultExt = L"bmp";
			this->saveBmDialog->Filter = L"Bitmap image (*.bmp)|*.bmp|All files (*.*)|*.*";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 412);
			this->Controls->Add(this->elemPanel);
			this->Controls->Add(this->mainPB);
			this->Controls->Add(this->bckpPB);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"��������� ����";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mainPB))->EndInit();
			this->elemPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bckpPB))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void mainPB_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		if (bLine == nullptr || lineBtn->Enabled)
		{
			lineOn = false;
			return;
		}
		
		// ���� ��� ����������������, � ������� �����, �������� ��� ����������� �����
		lineOn = !lineOn; 

		// ���� ����� ������, ���������� ��������� ����� ��� �����
		if (lineOn)
		{
			// �������� ����� ���������� �����, �� ������� ������
			int mX = e->X;
			int mY = e->Y;
			// ���� ���������� �� ����� �� ��������� �������������� ����� ����� ����� ������, ��� �� ������������
			if (abs(e->X - STEP - int(round((e->X - STEP) / (2 * STEP)) * (2 * STEP))) <
				abs(e->Y - STEP - int(round((e->Y - STEP) / (2 * STEP)) * (2 * STEP))))
			{
				// ������� X � �������������� �����
				mX = STEP + int(round((e->X - STEP) / (2 * STEP)) * (2 * STEP));
				// ������������ ������ ����������, ����� ��� � ������� ������������ ������
				// �� ����������� ����� �����, ���� ��� ����, � ���� ������ ��� �� ������.
				mY = mY / 2 * 2;
			}
			else
			{
				// ������� Y � ������������
				mY = STEP + int(round((e->Y - STEP) / (2 * STEP)) * (2 * STEP));
				// ������������ ������ ����������, ����� ��� � ������� ������������ ������
				// �� ����������� ����� �����, ���� ��� ����, � ���� ������ ��� �� ������.
				mX = mX / 2 * 2;
			}
			// ���������� � ���������� ����� ����������� ���������� ������ �����
			bLine = gcnew Point(mX, mY);
			// �������� ��������� ����� �������� ����� ���������� �����
			bckpPB->Image = ((PictureBox^)sender)->Image;
		}
	}

	private: System::Void mainPB_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{		
		if (bLine == nullptr || lineBtn->Enabled)
		{
			bLine = gcnew Point(10, 10);
			lineOn = false;
		}

		if (lineOn)
		{
			// �������� �������� ������ �� �����, ������� ���� ������� ����� ���������� �����
			Bitmap^ pbBm = gcnew Bitmap(bckpPB->Image);
			// ����������� � ���������� �������� ���������� ��� ���������
			Graphics^ g = Graphics::FromImage(pbBm);
			Pen^ blackPen = gcnew Pen(::Color::Black, 1);

			// �������� ������� ���������� �������
			int mX = e->X;
			int mY = e->Y;
			// ���������� �������� �������� ����� ������ ����������� ��� �������������
			// ��� ����� ����������, ����� �� ��������� ��������, ������� ���������� �� ���� �����
			if (abs(bLine->X - e->X) < abs(bLine->Y - e->Y))
			{
				mX = bLine->X;
				mY = mY / 2 * 2;
			}
			else
			{
				mY = bLine->Y;
				mX = mX / 2 * 2;
			}
			// ���������������� ��������� ����� ����� ���������� �������
			g->DrawLine(blackPen, bLine->X, bLine->Y, mX, mY);
			((PictureBox^)sender)->Image = dynamic_cast<Image^>(pbBm);
		}
	}
	
	private: System::String^ drawText(System::Windows::Forms::MouseEventArgs^  e)
	{
		String^ result = nullptr;
		SchemeDrawDialog::textDialogForm^ textDialog = gcnew SchemeDrawDialog::textDialogForm;
		// Show testDialog as a modal dialog and determine if DialogResult = OK.
		if (textDialog->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
		{
			// Read the contents of testDialog's TextBox.
			result = textDialog->txtResult->Text;
		}		
		delete textDialog;
		return result;
	}


	private: System::Void mainPB_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		PictureBox^ pb = ((PictureBox^)sender);
		// � ������� �������������� ������� ������ ��������� ���������, ������� ����� ��� �� ����������
		if (!lineBtn->Enabled || e->X < 0 || e->Y < 0 ||
			e->Y > pb->Height || e->X > pb->Width)
		{
			return;
		}
		// ��������� ������, ��������� � �����, ������� ���������� ����� ������� �� �������� �����
		if (!textBtn->Enabled)
		{
			String^ text = drawText(e);
			if (text != nullptr)
			{
				Bitmap^ bm = gcnew Bitmap(pb->Image);
				Graphics^ g = Graphics::FromImage(bm);
				float mX = e->X - 2.0 * text->Length;
				float mY = e->Y - 10.0;
				g->TextRenderingHint = ::Text::TextRenderingHint::AntiAliasGridFit;
				g->DrawString(text, gcnew ::Font("Arial", 9, FontStyle::Regular), ::Brushes::DarkRed, mX, mY);
				pb->Image = dynamic_cast<Image^>(bm);
			}
			return;
		}
		// ����������� �������� ��������� ������ ��� ����, ����� �������� �� �����
		Bitmap^ pbBm = gcnew Bitmap(pb->Image);
		Bitmap^ tmpltBm = nullptr;
		// ����� ������, ��� �� ������� ����� ���������� ��������,
		// ��� ����� �������� ��������� �� ������ ���� ��������� ���������� �� ������ � ����
		IEnumerator^ elemBtnPtr = elemPanel->Controls->GetEnumerator();
		for (int i = 0; i < elemPanel->Controls->Count; i++)
		{
			// ������ �������� ������������ � ���������� �������� � ������
			elemBtnPtr->MoveNext();
			Button^ elemBtn = (Button^)elemBtnPtr->Current;
			// ������ � ������� ��������� ��������� ����� ������ ���� ����������
			if (!elemBtn->Enabled)
			{
				// ���� ��� �� ����� ������, �������� � �������� � ������������� �����
				tmpltBm = gcnew Bitmap(elemBtn->Image);
				break;
			}
		}
		// ������� ��������� � ������� ����� ����������� ����� �����, ������� ����� ������� ��������,
		// � �����������, ��� ����� ������������ �� ����� ������� ����� �������� 
		int mX = e->X / (2 * STEP) * (2 * STEP) + STEP - tmpltBm->Width / 2;
		int mY = e->Y / (2 * STEP) * (2 * STEP) + STEP - tmpltBm->Height / 2;
		// �������������� �������� ������ (����� ������� ��������) �� ����� �������� ������
		for (int i = 0; i < tmpltBm->Width; i++)
		{
			for (int j = 0; j < tmpltBm->Height; j++)
			{
				Color curPxClr = tmpltBm->GetPixel(i, j);
				if (curPxClr.Name != "ffff0000")
				{
					pbBm->SetPixel(mX + i, mY + j, curPxClr);
				}
			}
		}
		// �������� ������� �������� ������ ����������, �� ������� ��������� ����� �������
		pb->Image = dynamic_cast<Image^>(pbBm);
	}

	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		bLine = gcnew Point(10, 10);
		lineOn = false;
		Bitmap^ bm = gcnew Bitmap(mainPB->Width, mainPB->Height);
		Graphics^ g = Graphics::FromImage(bm);
		Pen^ lGreyPen = gcnew Pen(::Color::LightGray, 1);
		// ��������� ����� ����� ����� � ��������� 2 * STEP �������� � ��������� ������� � STEP
		for (int i = STEP; i < bm->Width; i += STEP * 2)   
		{
			g->DrawLine(lGreyPen, i, 0, i, bm->Height);
		}
		for (int i = STEP; i < bm->Height; i += STEP * 2)
		{
			g->DrawLine(lGreyPen, 0, i, bm->Width, i);
		}
		
		mainPB->Image = dynamic_cast<Image^>(bm);
	}

	private: System::Void elemBtn_Click(System::Object^  sender, System::EventArgs^  e)
	{
		// ��� ������� �� ���� �� ���������� ������ ����� �� ������ ���� ��������� �� ������,
		// � ������ �� ���������� (Enabled)
		IEnumerator^ elemBtnPtr = elemPanel->Controls->GetEnumerator();
		for (int i = 0; i < elemPanel->Controls->Count; i++)
		{
			elemBtnPtr->MoveNext();
			Button^ elemBtn = (Button^)elemBtnPtr->Current;
			if (!elemBtn->Enabled)
			{
				elemBtn->Enabled = true;
			}
		}
		// � ����� ������ ����������� �������
		((Button^)sender)->Enabled = false;
	}

private: System::Void saveBtn_Click(System::Object^  sender, System::EventArgs^  e) 
{
	
	if (saveBmDialog->ShowDialog() == ::System::Windows::Forms::DialogResult::Cancel)
		return;
	// ���������� �������� ��� ����������
	Bitmap^ pbBm = gcnew Bitmap(this->mainPB->Image);
	Bitmap^ bm = gcnew Bitmap(mainPB->Width, mainPB->Height);
	for (int i = 0; i < pbBm->Width; i++)
	{
		for (int j = 0; j < pbBm->Height; j++)
		{
			Color curPxClr = pbBm->GetPixel(i, j);
			// �������������� �� (����� ����� �����)
			if (curPxClr.Name != "ffd3d3d3")
			{
				bm->SetPixel(i, j, curPxClr);
			}
		}
	}
	// �������� ��������� ����
	String^ filename = saveBmDialog->FileName;
	// ��������� �������� � ����
	bm->Save(filename);
	MessageBox::Show("���� ��������");
}

};
};