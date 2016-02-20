#pragma once
#include"form13.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form3 摘要
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		form3(void)
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
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form3::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(32, 59);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(65, 20);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form3::comboBox1_KeyDown);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(127, 59);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(39, 20);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form3::comboBox2_KeyDown);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(191, 59);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(39, 20);
			this->comboBox3->TabIndex = 2;
			this->comboBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form3::comboBox3_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(104, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 12);
			this->label1->TabIndex = 3;
			this->label1->Text = L"年";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(168, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 12);
			this->label2->TabIndex = 4;
			this->label2->Text = L"月";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(236, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 12);
			this->label3->TabIndex = 5;
			this->label3->Text = L"日";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(30, 30);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 12);
			this->label4->TabIndex = 6;
			this->label4->Text = L"请输入活动举办日期";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(30, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(245, 12);
			this->label5->TabIndex = 7;
			this->label5->Text = L"若活动举办多天,请稍后返回此处,分几天登记";
			this->label5->Click += gcnew System::EventHandler(this, &form3::label5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"开始申请";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(162, 144);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 41);
			this->button2->TabIndex = 9;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form3::button2_Click);
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(292, 224);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"申请者系统";
			this->Load += gcnew System::EventHandler(this, &form3::form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
			 }
private: System::Void comboBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 comboBox2->Select();
		 }
private: System::Void comboBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 comboBox3->Select();
		 }
private: System::Void comboBox3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 button1->Select();
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void form3_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 array<Object^>^objectArray1={"2012","2013","2014","2015","2016","2017"};
			 comboBox1->Items->AddRange(objectArray1);
			 comboBox1->Text="2013";
			 array<Object^>^objectArray2={"1","2","3","4","5","6","7","8","9","10","11","12"};
			 comboBox2->Items->AddRange(objectArray2);
			 comboBox2->Text="6";
			 array<Object^>^objectArray3={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};
			 comboBox3->Items->AddRange(objectArray3);
			 comboBox3->Text="8";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 extern int actyear,actmonth,actday;
			 date b;
			 extern char*datedat;
			 extern char*datetxt;
			 actyear=int::Parse(comboBox1->Text);
			 actmonth=int::Parse(comboBox2->Text);
			 actday=int::Parse(comboBox3->Text);
			 b.set(actyear,actmonth,actday);
			 b.getroute(datedat,actyear,actmonth,actday);//
			 b.gettxt(datetxt,actyear,actmonth,actday);
			 b.setnum(datedat);
			 form13^f13=gcnew form13();
			 f13->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f13->Show();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Close();
		 }
};
}
