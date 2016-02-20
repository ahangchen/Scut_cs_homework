#pragma once
#include"form4.h"
#include<fstream>
namespace 物资管理 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form2 摘要
	/// </summary>
	public ref class form2 : public System::Windows::Forms::Form
	{
	public:
		form2(void)
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
		~form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"用户名";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(98, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(109, 21);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form2::textBox1_KeyDown);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(96, 96);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PasswordChar = '*';
			this->maskedTextBox1->Size = System::Drawing::Size(110, 21);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form2::maskedTextBox1_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(67, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 33);
			this->button1->TabIndex = 4;
			this->button1->Text = L"确定";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(161, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 33);
			this->button2->TabIndex = 5;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form2::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(98, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 31);
			this->button3->TabIndex = 6;
			this->button3->Text = L"进入管理员系统";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form2::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(114, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 20);
			this->button4->TabIndex = 7;
			this->button4->Text = L"忘记密码";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &form2::button4_Click);
			// 
			// form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(280, 218);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(300, 300);
			this->Name = L"form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"管理员登陆";
			this->Load += gcnew System::EventHandler(this, &form2::form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		static int sign=0;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(sign==1)
			 {
				form4^f4=gcnew form4();
				f4->StartPosition=FormStartPosition::WindowsDefaultLocation;
				f4->Show();
			 }	
			 if(sign==0)
			 {
				MessageBox::Show("您还没有输入用户名和密码","请输入密码！",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 static int flag=0;
			 char password[100];
			 fstream fdat("d:\\goodmanagefile\\password.dat",ios::in|ios::binary);
			 fdat.seekg(0,ios::beg);
			 fdat>>password;
			 fdat.close();
			 String^pass=gcnew String(password);
			if(flag<3)
			{
				if(textBox1->Text=="c1-118"&&maskedTextBox1->Text==pass)
				{
					MessageBox::Show("欢迎！管理员！","登陆成功",MessageBoxButtons::OK);
					sign=1;
					button3->Show();
					this->Height+=40;
					button3->Select();
					textBox1->Enabled=false;
					maskedTextBox1->Enabled=false;
				}
				else
				{
					MessageBox::Show("用户名或密码错误，请重新输入，\n最多输入三次","用户名或密码错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
					flag++;
					textBox1->Clear();
					maskedTextBox1->Clear();
					textBox1->Select();
				}
			}
			else
			{
				MessageBox::Show("您已输入错误三次，将不能使用管理员系统","错误三次",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				button2->Select();
			}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 maskedTextBox1->Select();
		 }
private: System::Void maskedTextBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
private: System::Void form2_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 this->StartPosition=System::Windows::Forms::FormStartPosition::CenterScreen;
			 button3->Hide();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 fstream fdat("d:\\goodmanagefile\\password.dat",ios::out|ios::binary);
			 fdat.seekg(0,ios::beg);
			 fdat<<"39380123";
			 MessageBox::Show("已恢复为原始密码！","忘记密码",MessageBoxButtons::OK);
			 fdat.close();
		 }
};
}
