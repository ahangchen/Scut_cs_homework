#pragma once

namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// form5 摘要
	/// </summary>
	public ref class form5 : public System::Windows::Forms::Form
	{
	public:
		form5(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~form5()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  保存ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  前景色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  背景色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  删除ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  全选ToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form5::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->保存ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->剪切ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->删除ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->全选ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->前景色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->背景色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->文件FToolStripMenuItem, 
				this->编辑EToolStripMenuItem, this->格式OToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(758, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->打开ToolStripMenuItem, 
				this->保存ToolStripMenuItem, this->退出ToolStripMenuItem});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F));
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->文件FToolStripMenuItem->Text = L"文件（&F）";
			// 
			// 打开ToolStripMenuItem
			// 
			this->打开ToolStripMenuItem->Name = L"打开ToolStripMenuItem";
			this->打开ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->打开ToolStripMenuItem->Text = L"打开";
			this->打开ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::打开ToolStripMenuItem_Click);
			// 
			// 保存ToolStripMenuItem
			// 
			this->保存ToolStripMenuItem->Name = L"保存ToolStripMenuItem";
			this->保存ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->保存ToolStripMenuItem->Text = L"保存";
			this->保存ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::保存ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->退出ToolStripMenuItem->Text = L"退出";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::退出ToolStripMenuItem_Click);
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->剪切ToolStripMenuItem, 
				this->复制ToolStripMenuItem, this->粘贴ToolStripMenuItem, this->删除ToolStripMenuItem, this->全选ToolStripMenuItem});
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::E));
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->编辑EToolStripMenuItem->Text = L"编辑（&E）";
			// 
			// 剪切ToolStripMenuItem
			// 
			this->剪切ToolStripMenuItem->Name = L"剪切ToolStripMenuItem";
			this->剪切ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->剪切ToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->剪切ToolStripMenuItem->Text = L"剪切";
			this->剪切ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::剪切ToolStripMenuItem_Click);
			// 
			// 复制ToolStripMenuItem
			// 
			this->复制ToolStripMenuItem->Name = L"复制ToolStripMenuItem";
			this->复制ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->复制ToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->复制ToolStripMenuItem->Text = L"复制";
			this->复制ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::复制ToolStripMenuItem_Click);
			// 
			// 粘贴ToolStripMenuItem
			// 
			this->粘贴ToolStripMenuItem->Name = L"粘贴ToolStripMenuItem";
			this->粘贴ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->粘贴ToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->粘贴ToolStripMenuItem->Text = L"粘贴";
			this->粘贴ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::粘贴ToolStripMenuItem_Click);
			// 
			// 删除ToolStripMenuItem
			// 
			this->删除ToolStripMenuItem->Name = L"删除ToolStripMenuItem";
			this->删除ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->删除ToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->删除ToolStripMenuItem->Text = L"删除";
			this->删除ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::删除ToolStripMenuItem_Click);
			// 
			// 全选ToolStripMenuItem
			// 
			this->全选ToolStripMenuItem->Name = L"全选ToolStripMenuItem";
			this->全选ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->全选ToolStripMenuItem->Size = System::Drawing::Size(137, 22);
			this->全选ToolStripMenuItem->Text = L"全选";
			this->全选ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::全选ToolStripMenuItem_Click);
			// 
			// 格式OToolStripMenuItem
			// 
			this->格式OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->字体ToolStripMenuItem, 
				this->前景色ToolStripMenuItem, this->背景色ToolStripMenuItem});
			this->格式OToolStripMenuItem->Name = L"格式OToolStripMenuItem";
			this->格式OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->格式OToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->格式OToolStripMenuItem->Text = L"格式（&O）";
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->字体ToolStripMenuItem->Text = L"字体";
			this->字体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::字体ToolStripMenuItem_Click);
			// 
			// 前景色ToolStripMenuItem
			// 
			this->前景色ToolStripMenuItem->Name = L"前景色ToolStripMenuItem";
			this->前景色ToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->前景色ToolStripMenuItem->Text = L"前景色";
			this->前景色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::前景色ToolStripMenuItem_Click);
			// 
			// 背景色ToolStripMenuItem
			// 
			this->背景色ToolStripMenuItem->Name = L"背景色ToolStripMenuItem";
			this->背景色ToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->背景色ToolStripMenuItem->Text = L"背景色";
			this->背景色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &form5::背景色ToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &form5::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &form5::saveFileDialog1_FileOk);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 39);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(737, 265);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(758, 316);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"form5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"信息读取";
			this->Load += gcnew System::EventHandler(this, &form5::form5_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 打开ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 richTextBox1->Text="";
				 openFileDialog1->InitialDirectory="C:\\temp\\";
				 openFileDialog1->Filter="文本文件(*.txt)|*.txt|全部文件(*.*)|*.*";
				 openFileDialog1->FilterIndex=1;
				 openFileDialog1->RestoreDirectory=true;
				 openFileDialog1->ShowDialog();
			 }
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
		 {
			 String^path=openFileDialog1->FileName;
			 richTextBox1->LoadFile(path,RichTextBoxStreamType::PlainText);
		 }
private: System::Void 保存ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 saveFileDialog1->InitialDirectory="C:\\temp\\";
			 saveFileDialog1->Filter="文本文件(*.txt)|*.txt|全部文件(*.*)|*.*";
			 saveFileDialog1->FilterIndex=1;
			 saveFileDialog1->RestoreDirectory=true;
			 saveFileDialog1->ShowDialog();
		 }
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) 
		 {
			 String^path=saveFileDialog1->FileName;
			 richTextBox1->SaveFile(path,RichTextBoxStreamType::PlainText);
			 MessageBox::Show("文件已保存","保存成功",MessageBoxButtons::OK,MessageBoxIcon::Information);
		 }
private: System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void 字体ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 fontDialog1->ShowColor=true;
			 fontDialog1->ShowApply=true;
			 fontDialog1->ShowHelp=true;
			 Windows::Forms::DialogResult result;
			 result=fontDialog1->ShowDialog();
			 if(result==Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->Font=fontDialog1->Font;
				 richTextBox1->ForeColor=fontDialog1->Color;
			 }
		 }
private: System::Void 前景色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 colorDialog1->ShowDialog();
			 richTextBox1->ForeColor=colorDialog1->Color;
		 }
private: System::Void 背景色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 colorDialog1->ShowDialog();
			 richTextBox1->BackColor=colorDialog1->Color;
		 }
private: System::Void 剪切ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Cut();
		 }
private: System::Void 复制ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Copy();
		 }
private: System::Void 粘贴ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->Paste();
		 }
private: System::Void 删除ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SelectedText="";
		 }
private: System::Void 全选ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 richTextBox1->SelectAll();
		 }
private: System::Void form5_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
