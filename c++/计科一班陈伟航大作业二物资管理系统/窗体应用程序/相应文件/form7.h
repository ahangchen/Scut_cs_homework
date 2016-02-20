#pragma once
namespace 物资管理 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// form7 摘要
	/// </summary>
	public ref class form7 : public System::Windows::Forms::Form
	{
	public:
		form7(void)
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
		~form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form7::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"年";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(130, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"月";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(175, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"日";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"在这里输入日期";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"数据文件路径";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"文本文件路径";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(43, 21);
			this->textBox1->TabIndex = 6;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form7::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(101, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(23, 21);
			this->textBox2->TabIndex = 7;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form7::textBox2_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(144, 49);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(25, 21);
			this->textBox3->TabIndex = 8;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form7::textBox3_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(28, 116);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(195, 21);
			this->textBox4->TabIndex = 9;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form7::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(28, 172);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(195, 21);
			this->textBox5->TabIndex = 10;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form7::textBox5_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(49, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(54, 30);
			this->button1->TabIndex = 11;
			this->button1->Text = L"录入";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form7::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 31);
			this->button2->TabIndex = 12;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form7::button2_Click);
			// 
			// form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(252, 267);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form7";
			this->Text = L"日期文件地址录入";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ converttostring(char* inChar, int Len)
		{
			cli::array<unsigned char>^ cli_array = gcnew cli::array<unsigned char>(Len);
			for(int i=0;i < Len;i++)
			cli_array[i] = inChar[i];
			System::Text::ASCIIEncoding ^ encoding=gcnew System::Text::ASCIIEncoding();
			return encoding->GetString(cli_array);
		}
		char *converttochar(String^ inString)
		{
			int Len =inString->Length;
			cli::array<unsigned char>^ cli_array = gcnew cli::array<unsigned char>(Len);
			System::Text::ASCIIEncoding ^ encoding=gcnew System::Text::ASCIIEncoding();
			encoding->GetBytes(inString,0,Len,cli_array,0);
			char* outChar=new char[Len];
			int i;
			for(i=0;i<Len;i++)
			outChar[i]=cli_array[i];
			outChar[i]='\0';
			return outChar;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if(textBox1->Text==""||textBox2->Text==""||textBox3->Text=="")
				 {
					 MessageBox::Show("请输入完整日期","日期错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
				 if(textBox4->Text==""||textBox5->Text=="")
				 {
					 MessageBox::Show("请输入完整路径","路径错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
				 if(!(textBox1->Text==""||textBox2->Text==""||textBox3->Text==""||textBox4->Text==""||textBox5->Text==""))
				 {
					 int year,month,day;
					 year=int::Parse(textBox1->Text);
					 month=int::Parse(textBox2->Text);
					 day=int::Parse(textBox3->Text);
					 char route[100],txt[100];
					 String^s1=textBox4->Text;
					 String^s2=textBox5->Text;	
					 char*str1=(char*)(Marshal::StringToHGlobalAnsi(s1)).ToPointer();
					 char*str2=(char*)(Marshal::StringToHGlobalAnsi(s2)).ToPointer();
					 strcpy_s(route,str1);
					 strcpy_s(txt,str2);
					 managedate p;
					 p.append(year,month,day,route,txt);
				 }
				 button2->Select();
			 }
private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 textBox2->Select();
		 }
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 textBox3->Select();
		 }
private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 textBox4->Select();
		 }
private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 textBox5->Select();
		 }
private: System::Void textBox5_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
};
}
