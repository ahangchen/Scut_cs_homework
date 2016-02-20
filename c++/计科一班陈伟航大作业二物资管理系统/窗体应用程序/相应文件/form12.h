#pragma once
#include<fstream>
namespace 物资管理 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// form12 摘要
	/// </summary>
	public ref class form12 : public System::Windows::Forms::Form
	{
	public:
		form12(void)
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
		~form12()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form12::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 2;
			this->label1->Text = L"新密码";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"重复密码";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(67, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 30);
			this->button1->TabIndex = 4;
			this->button1->Text = L"修改";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form12::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(152, 188);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form12::button2_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(56, 63);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PasswordChar = '*';
			this->maskedTextBox1->Size = System::Drawing::Size(166, 21);
			this->maskedTextBox1->TabIndex = 6;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(56, 131);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->PasswordChar = '*';
			this->maskedTextBox2->Size = System::Drawing::Size(166, 21);
			this->maskedTextBox2->TabIndex = 7;
			// 
			// form12
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(283, 267);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form12";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"修改密码";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(maskedTextBox1->Text==""||maskedTextBox2->Text=="")
				 MessageBox::Show("请输入密码","输入为空",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else if(maskedTextBox1->Text!=maskedTextBox2->Text)
				 MessageBox::Show("密码不一致","密码错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 else 
			 {
				 String^s=maskedTextBox1->Text;
				 char*str=(char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 fstream fdat("d:\\goodmanagefile\\password.dat",ios::out|ios::binary);
				 fdat.seekg(0,ios::beg);
				 fdat<<str;
				 MessageBox::Show("密码修改完成！\n请记住你的密码","修改成功",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 button2->Select();
				 fdat.close();
			 }
		 }
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 maskedTextBox2->Select();
		 }
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
};
}
