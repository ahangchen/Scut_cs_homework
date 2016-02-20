#pragma once

namespace 毕业设计管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// login 摘要
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(44, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"登陆";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"用户ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(112, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 2;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(113, 106);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PasswordChar = '*';
			this->maskedTextBox1->Size = System::Drawing::Size(100, 21);
			this->maskedTextBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 4;
			this->label2->Text = L"密码";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 5;
			this->label3->Text = L"用户类型";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"毕业生", L"教师", L"管理员"});
			this->comboBox1->Location = System::Drawing::Point(112, 145);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 20);
			this->comboBox1->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(103, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(15, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 45);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &login::pictureBox1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(152, 185);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"注册";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &login::button3_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern int usertype;
			 extern char username[50];
			 //如果验证通过
			 //如果是毕业生
			 if(comboBox1->SelectedIndex==0)
			 {
				 long sid=long::Parse(textBox1->Text);
				 char*pwd=(char*)(Marshal::StringToHGlobalAnsi(maskedTextBox1->Text)).ToPointer();
				 Student s1=Student();
				 /*do 
				 {
					 f.read((char*)&s1,sizeof(Student));
				 } while (s1.getstuid()!=sid&&!s1.getendmark()==1);*/
				 extern LList<Student> stulist;
				 for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
				 {
					 if (stulist.getValue().getstuid()==sid)
					 {
						 s1=Student(stulist.getValue());break;
					 }
				 }
				 //密码验证
				 if (s1.getstuid()!=sid)
				 {
					 MessageBox::Show("没有找到该用户，请确认用户名！");
				 }
				 else
				 {
					 if (!strcmp(s1.getpwd(),pwd))
					 {
						 String^s=gcnew String(s1.getname());
						 s+="";
						 MessageBox::Show("欢迎学生"+s+"!");
						 usertype=1;
						 extern Student globalstu;
						 globalstu=Student(s1);
						 strcpy_s(username,s1.getname());
						 StuForm^stuf=gcnew StuForm();
						 stuf->Show();
						 Close();
					 }
					 else
					 {
						 MessageBox::Show("密码错误！");
						 maskedTextBox1->Clear();
					 }
				 }
				 
			 }
			 //如果是教师
			 else if (comboBox1->SelectedIndex==1)
			 {
				 long sid=long::Parse(textBox1->Text);
				 char*pwd=(char*)(Marshal::StringToHGlobalAnsi(maskedTextBox1->Text)).ToPointer();
				 Teacher s1;
				 extern LList<Teacher> teclist;
				 for(teclist.moveToStart();teclist.currPos()<teclist.length();teclist.next())
				 {
					 if (teclist.getValue().gettecid()==sid)
					 {
						 s1=Teacher(teclist.getValue());break;
					 }
				 }
				 //密码验证
				 if (s1.gettecid()!=sid)
				 {
					 MessageBox::Show("没有找到该用户，请确认用户名！");
				 }
				 else
				 {
					 if (!strcmp(s1.getpwd(),pwd))
					 {
						 String^s=gcnew String(s1.getname());
						 s+="";
						 MessageBox::Show("欢迎教师"+s+"!");
						 extern Teacher globaltec;
						 globaltec=Teacher(s1);
						 usertype=2;
						  strcpy_s(username,s1.getname());
						 TecForm^tecf=gcnew TecForm();
						 tecf->Show();
						 Close();
					 }
					 else
					 {
						 MessageBox::Show("密码错误！");
						 maskedTextBox1->Clear();
					 }
				 }
				 /*TecForm^tecf=gcnew TecForm();
				 tecf->Show();*/
			 }
			 //如果是管理员
			 else if (comboBox1->SelectedIndex==2)
			 {
				 long sid=long::Parse(textBox1->Text);
				 char*pwd=(char*)(Marshal::StringToHGlobalAnsi(maskedTextBox1->Text)).ToPointer();
				 Manager s1;
				 extern LList<Manager> manlist;
				 for(manlist.moveToStart();manlist.currPos()<manlist.length();manlist.next())
				 {
					 if (manlist.getValue().getmid()==sid)
					 {
						 s1=Manager(manlist.getValue());break;
					 }
				 }
				 //密码验证
				 if (s1.getmid()!=sid)
				 {
					 MessageBox::Show("没有找到该用户，请确认用户名！");
				 }
				 else
				 {
					 if (!strcmp(s1.getpwd(),pwd))
					 {
						 String^s=gcnew String(s1.getname());
						 s+="";
						 MessageBox::Show("欢迎管理员"+s+"!");
						 extern Manager globalman;
						 globalman=Manager(s1);
						 usertype=3;
						  strcpy_s(username,s1.getname());
						 manageForm^stuf=gcnew manageForm();
						 stuf->Show();
						 Close();
					 }
					 else
					 {
						 MessageBox::Show("密码错误！");
						 maskedTextBox1->Clear();
					 }
				 }
				 /*manageForm^manf=gcnew manageForm();
				 manf->Show();*/
			 }
			 //如果是游客
			 else 
			 {
				 MessageBox::Show("将以游客方式继续");
				 usertype=0;
				  strcpy_s(username,"");
				 Form2^f1=gcnew Form2();
				 f1->Show();
				 Close();
			 }			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 regForm^rgf=gcnew regForm();
			 rgf->Show();
			 Close();
		 }
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
