#pragma once
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form9 摘要
	/// </summary>
	public ref class form9 : public System::Windows::Forms::Form
	{
	public:
		form9(void)
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
		~form9()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form9::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"原日期";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(86, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 21);
			this->textBox1->TabIndex = 4;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form9::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(201, 23);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(21, 21);
			this->textBox2->TabIndex = 5;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form9::textBox2_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(154, 23);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(21, 21);
			this->textBox3->TabIndex = 6;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form9::textBox3_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(131, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 12);
			this->label5->TabIndex = 9;
			this->label5->Text = L"年";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(181, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 12);
			this->label6->TabIndex = 10;
			this->label6->Text = L"月";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(228, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 11;
			this->label3->Text = L"日";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(228, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 12);
			this->label4->TabIndex = 18;
			this->label4->Text = L"日";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(181, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 12);
			this->label7->TabIndex = 17;
			this->label7->Text = L"月";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(131, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(17, 12);
			this->label8->TabIndex = 16;
			this->label8->Text = L"年";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(154, 60);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(21, 21);
			this->textBox4->TabIndex = 15;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form9::textBox4_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(201, 60);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(21, 21);
			this->textBox5->TabIndex = 14;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form9::textBox5_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(86, 60);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(39, 21);
			this->textBox6->TabIndex = 13;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form9::textBox6_KeyDown);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(39, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 12);
			this->label9->TabIndex = 12;
			this->label9->Text = L"新日期";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(119, 109);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 31);
			this->button3->TabIndex = 19;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form9::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 20;
			this->label1->Text = L"新信息";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(41, 174);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(204, 93);
			this->textBox7->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(119, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 36);
			this->button1->TabIndex = 22;
			this->button1->Text = L"返回";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form9::button1_Click);
			// 
			// form9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(292, 332);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form9";
			this->Text = L"修改日期";
			this->Load += gcnew System::EventHandler(this, &form9::form9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
			 {
				 if(e->KeyCode==Keys::Enter)
				 textBox3->Select();
			 }
private: System::Void textBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 textBox2->Select();
		 }
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 textBox6->Select();
		 }
private: System::Void textBox6_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
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
				 button3->Select();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(textBox1->Text==""||textBox2->Text==""||textBox3->Text==""||textBox4->Text==""||textBox5->Text==""||textBox6->Text=="")
				 {
					 MessageBox::Show("请输入完整日期","日期错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				 }
			 else
				 {
					 int year=0,month=0,day=0,year2=0,month2=0,day2=0;
					 char route[50],txt[50],route2[50],txt2[50];
					 year=int::Parse(textBox1->Text);
					 month=int::Parse(textBox3->Text);
					 day=int::Parse(textBox2->Text);	
					 year2=int::Parse(textBox6->Text);
					 month2=int::Parse(textBox4->Text);
					 day2=int::Parse(textBox5->Text);	
					 managedate p;
					 p.change(2,route,route2,txt,txt2,year,month,day,year2,month2,day2);
					 String^s="日期"+"\t"+year.ToString()+"年"+month.ToString()+"月"+day.ToString()+"日\t\t"+"\t";
					 s+="数据文件地址："+"\t";
					 String^s1=gcnew String(route);
					 String^s2=gcnew String(txt);
					 s+=s1+"\t"+"\t文本文件地址："+"\t"+s2;
					 textBox7->Text=s;
				 }
			 button1->Select();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
private: System::Void form9_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
};
}
