#pragma once


namespace 毕业设计管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// regForm 摘要
	/// </summary>
	public ref class regForm : public System::Windows::Forms::Form
	{
	public:
		regForm(void)
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
		~regForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(regForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(154, 209);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &regForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"毕业生", L"教师", L"管理员"});
			this->comboBox1->Location = System::Drawing::Point(115, 160);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 20);
			this->comboBox1->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 14;
			this->label3->Text = L"用户类型";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(57, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 13;
			this->label2->Text = L"密码";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(116, 121);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 21);
			this->maskedTextBox1->TabIndex = 12;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(115, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(57, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 10;
			this->label1->Text = L"用户名";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 209);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"注册";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &regForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(19, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 45);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// regForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"regForm";
			this->Text = L"regForm";
			this->Load += gcnew System::EventHandler(this, &regForm::regForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 extern int stunum;
				 extern int tecnum;
				 extern int arcnum;
				 extern int repnum;
				 extern int manum;
				 extern LList<Student>stulist;
				 extern LList<Teacher>teclist;
				 extern LList<Manager>manlist;
				 //根据不同用户类型写不同的用户资料
				 //char*uid=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
				 char*sname=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
				 char*pwd=(char*)(Marshal::StringToHGlobalAnsi(maskedTextBox1->Text)).ToPointer();
				 if(comboBox1->SelectedIndex==0)
				 {
					 fstream f;
					 f.open("d:\\stulist.dat",ios::in|ios::out|ios::binary);
					 Student s0=Student();
					 f.seekg(0,ios::beg);
					 do 
					 {
						 f.read((char*)&s0,sizeof(Student));
					 } while (s0.getendmark()!=1);

					Student s1=Student();
					 s1.setname(sname);
					 s1.setpwd(pwd);
					 s1.setstuid(++stunum);
					 f.seekp(-long(sizeof(Student)),ios::cur);//回退一位覆盖结束位
					 f.write((char*)&s1,sizeof(Student));
					  stulist.insert(s1);
					  /* for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
					  {
					  MessageBox::Show(gcnew String(stulist.getValue().getname())+gcnew String(stulist.getValue().getpwd()));
					  }*/
					 //写入结束位
					 Student end=Student();
					 end.setendmark(1);
					 end.setexsitmark(1);
					 f.write((char*)&end,sizeof(Student));
					 f.close();
					 fstream f1;
					 f1.open("d:\\maxnum.txt",ios::out);
					 f1<<arcnum<<" "<<repnum<<" "<<stunum<<" "<<tecnum<<" "<<manum;
					 f1.close();
					 //注册成功后自动跳转
					 MessageBox::Show(s1.getstuid().ToString()+"是您的ID，请记住，下次需要用ID登陆！");
					 extern int usertype;
					 usertype=1;
					 extern char username[50];
					 strcpy_s(username,s1.getname());
					 extern Student globalstu;
					 globalstu=Student(s1);
					 StuForm^stuf=gcnew StuForm();
					 stuf->Show();
					 Close();
					 //userinfo.closedb();
				 }
				 //如果是教师
				 else if (comboBox1->SelectedIndex==1)
				 {
					 fstream f;
					 f.open("d:\\teclist.dat",ios::in|ios::out|ios::binary);
					 Teacher s0=Teacher();
					 f.seekg(0,ios::beg);
					 do 
					 {
						 f.read((char*)&s0,sizeof(Teacher));
					 } while (s0.getendmark()!=1);
					 Teacher s1=Teacher();
					 s1.setname(sname);
					 s1.setpwd(pwd);
					 s1.settecid(++tecnum);
					 f.seekp(-long(sizeof(Teacher)),ios::cur);//回退一位覆盖结束位
					 f.write((char*)&s1,sizeof(Teacher));
					 teclist.insert(s1);
					 //写入结束位
					 Teacher end=Teacher();
					 end.setendmark(1);
					 end.setexsitmark(1);
					 f.write((char*)&end,sizeof(Teacher));
					 f.close();
					 fstream f1;
					 f1.open("d:\\maxnum.txt",ios::out);
					 f1<<arcnum<<" "<<repnum<<" "<<stunum<<" "<<tecnum<<" "<<manum;
					 f1.close();
					 //注册成功后自动跳转
					 MessageBox::Show(s1.gettecid().ToString()+"是您的ID，请记住，下次需要用ID登陆！");
					 extern Teacher globaltec;
					 globaltec=Teacher(s1);
					 extern int usertype;
					 usertype=2;
					 extern char username[50];
					 strcpy_s(username,s1.getname());
					 TecForm^tecf=gcnew TecForm();
					 tecf->Show();
					 Close();
				 }
				 //如果是管理员
				 else if (comboBox1->SelectedIndex==2)
				 {
					 fstream f;
					 f.open("d:\\manlist.dat",ios::in|ios::out|ios::binary);
					 Manager s0=Manager();
					 f.seekg(0,ios::beg);
					 do 
					 {
						 f.read((char*)&s0,sizeof(Manager));
					 } while (s0.getendmark()!=1);
					 Manager s1;
					 s1.setname(sname);
					 s1.setpwd(pwd);
					 s1.setmid(++manum);
					 f.seekp(-long(sizeof(Manager)),ios::cur);//回退一位覆盖结束位
					 f.write((char*)&s1,sizeof(Manager));
					 manlist.insert(s1);
					 //写入结束位
					 Manager end=Manager();
					 end.setendmark(1);
					 end.setexsitmark(1);
					 f.write((char*)&end,sizeof(Manager));
					 f.close();
					 fstream f1;
					 f1.open("d:\\maxnum.txt",ios::out);
					 f1<<arcnum<<" "<<repnum<<" "<<stunum<<" "<<tecnum<<" "<<manum;
					 f1.close();
					 //注册成功后自动跳转
					 MessageBox::Show(s1.getmid().ToString()+"是您的ID，请记住，下次需要用ID登陆！");
					 extern Manager globalman;
					 globalman=Manager(s1);
					 extern int usertype;
					 usertype=3;
					 extern char username[50];
					 strcpy_s(username,s1.getname());
					 manageForm^mf=gcnew manageForm();
					 mf->Show();
					 Close();
				 }
				 //如果是游客
				 else 
				 {
					 //注册成功后自动跳转
					 MessageBox::Show("将以游客方式继续");
					 extern int usertype;
					 usertype=0;
					 extern char username[50];
					 strcpy_s(username,"");
					 Form2^f1=gcnew Form2();
					 f1->Show();
				 }	
			 }
private: System::Void regForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 extern int stunum;
			 //MessageBox::Show(stunum.ToString());
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
};
}
