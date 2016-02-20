#pragma once

namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form6 摘要
	/// </summary>
	public ref class form6 : public System::Windows::Forms::Form
	{
	public:
		form6(void)
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
		~form6()
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form6::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(43, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"请输入希望建立的文件的起始时间的年月";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(221, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"请输入希望建立的文件的结束时间的年月";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(144, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"年";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(144, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"年";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(191, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"月";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(191, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"月";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(72, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 35);
			this->button1->TabIndex = 6;
			this->button1->Text = L"批量建立";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form6::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 21);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form6::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 168);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(48, 21);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form6::textBox2_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(27, 21);
			this->textBox3->TabIndex = 9;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form6::textBox3_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 168);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(27, 21);
			this->textBox4->TabIndex = 10;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form6::textBox4_KeyDown);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(158, 205);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 35);
			this->button2->TabIndex = 11;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form6::button2_Click);
			// 
			// form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(297, 267);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form6";
			this->Text = L"批量建立";
			this->Load += gcnew System::EventHandler(this, &form6::form6_Load);
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
				 textBox4->Select();
		 }
private: System::Void textBox4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)button1->Select();
		 }
private: System::Void form6_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int year1,month1,year2,month2;
			 if(textBox1->Text!=""&&textBox2->Text!=""&&textBox3->Text!=""&&textBox4->Text!="")
			 {
				 year1=int::Parse(textBox1->Text);
				 month1=int::Parse(textBox3->Text);
				 year2=int::Parse(textBox2->Text);
				 month2=int::Parse(textBox4->Text);
				 managedate p;
				 p.createlist(year1,month1,year2,month2);
			 }
			 else MessageBox::Show("亲！还没输入日期","输入错误",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			 button2->Select();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
};
}
