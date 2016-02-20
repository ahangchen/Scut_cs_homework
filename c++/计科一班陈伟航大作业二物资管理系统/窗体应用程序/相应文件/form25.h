#pragma once
#include"form26.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// form25 摘要
	/// </summary>
	public ref class form25 : public System::Windows::Forms::Form
	{
	public:
		form25(void)
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
		~form25()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;



	private: System::Windows::Forms::TextBox^  textBox12;

	private: System::Windows::Forms::TextBox^  textBox10;

	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form25::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(291, 202);
			this->tabControl1->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 21);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(283, 177);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"基本信息";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(79, 138);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 21);
			this->textBox5->TabIndex = 9;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox5_KeyDown);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(79, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 21);
			this->textBox4->TabIndex = 8;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox4_KeyDown);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(79, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 21);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox3_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 21);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox2_KeyDown);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 21);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox1_KeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"负责人";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"联系方式";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"活动地点";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"主办方";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"活动名称";
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->comboBox1);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 21);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(283, 177);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"物资详情";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(157, 138);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(62, 20);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::comboBox2_KeyDown);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(76, 138);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(57, 20);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::comboBox1_KeyDown);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(7, 44);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 12);
			this->label28->TabIndex = 18;
			this->label28->Text = L"借用数量";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(156, 103);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(63, 21);
			this->textBox12->TabIndex = 13;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &form25::textBox12_TextChanged);
			this->textBox12->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox12_KeyDown);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(75, 103);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(58, 21);
			this->textBox10->TabIndex = 11;
			this->textBox10->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox10_KeyDown);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(158, 41);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(61, 21);
			this->textBox8->TabIndex = 9;
			this->textBox8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox8_KeyDown);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(75, 41);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(58, 21);
			this->textBox6->TabIndex = 7;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &form25::textBox6_KeyDown);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 141);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 12);
			this->label12->TabIndex = 6;
			this->label12->Text = L"使用时段";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 106);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 4;
			this->label10->Text = L"借用数量";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(165, 82);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 12);
			this->label9->TabIndex = 3;
			this->label9->Text = L"音响";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(83, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 12);
			this->label8->TabIndex = 2;
			this->label8->Text = L"无线麦";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(165, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 1;
			this->label7->Text = L"桌子";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 12);
			this->label6->TabIndex = 0;
			this->label6->Text = L"胶凳";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->label22);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label20);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Location = System::Drawing::Point(4, 21);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(283, 177);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"物资领取";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(8, 15);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(29, 12);
			this->label27->TabIndex = 15;
			this->label27->Text = L"物资";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(82, 105);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(113, 12);
			this->label25->TabIndex = 14;
			this->label25->Text = L"C1-118团工委办公室";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(244, 137);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(11, 12);
			this->label26->TabIndex = 13;
			this->label26->Text = L"1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(244, 105);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(11, 12);
			this->label24->TabIndex = 11;
			this->label24->Text = L"2";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(82, 137);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(113, 12);
			this->label23->TabIndex = 10;
			this->label23->Text = L"C1-118团工委办公室";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(238, 74);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(17, 12);
			this->label22->TabIndex = 9;
			this->label22->Text = L"20";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(82, 74);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 12);
			this->label21->TabIndex = 8;
			this->label21->Text = L"C3学生会办公室";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(232, 44);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(29, 12);
			this->label20->TabIndex = 7;
			this->label20->Text = L"不限";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(82, 44);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(77, 12);
			this->label19->TabIndex = 6;
			this->label19->Text = L"体育馆或C9东";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(8, 137);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 12);
			this->label18->TabIndex = 5;
			this->label18->Text = L"音响";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 105);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 12);
			this->label17->TabIndex = 4;
			this->label17->Text = L"无线麦";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(223, 15);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 12);
			this->label16->TabIndex = 3;
			this->label16->Text = L"借用上限";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(82, 15);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(53, 12);
			this->label15->TabIndex = 2;
			this->label15->Text = L"领取地点";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 74);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 12);
			this->label14->TabIndex = 1;
			this->label14->Text = L"桌子";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 44);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 12);
			this->label13->TabIndex = 0;
			this->label13->Text = L"胶凳";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 30);
			this->button1->TabIndex = 11;
			this->button1->Text = L"申请";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form25::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(194, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(60, 30);
			this->button2->TabIndex = 12;
			this->button2->Text = L"返回";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form25::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(111, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 30);
			this->button3->TabIndex = 13;
			this->button3->Text = L"查看";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form25::button3_Click);
			// 
			// form25
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(298, 273);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form25";
			this->Text = L"活动登记";
			this->Load += gcnew System::EventHandler(this, &form25::form25_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 extern int actyear,actmonth,actday;
			 date b;
			 manageactivity a;
			 extern int p;
			 p=0;
			 extern char*datedat;
			 extern char*datetxt;
			 b.setnum(datedat);
			 String^s1=textBox1->Text;
			 String^s2=textBox2->Text;
			 String^s3=textBox3->Text;
			 String^s4=textBox4->Text;
			 String^s6=comboBox1->Text;
			 String^s7=comboBox2->Text;
			 char*str1=(char*)(Marshal::StringToHGlobalAnsi(s1)).ToPointer();
			 char*str2=(char*)(Marshal::StringToHGlobalAnsi(s2)).ToPointer();
			 char*str3=(char*)(Marshal::StringToHGlobalAnsi(s3)).ToPointer();
			 char*str4=(char*)(Marshal::StringToHGlobalAnsi(s4)).ToPointer();
			 char*str6=(char*)(Marshal::StringToHGlobalAnsi(s6)).ToPointer();
			 char*str7=(char*)(Marshal::StringToHGlobalAnsi(s7)).ToPointer();
			 int na,nb,nc,nd;
			 long ph;
			 ph=long::Parse(textBox5->Text);
			 na=int::Parse(textBox6->Text);
			 nb=int::Parse(textBox8->Text);
			 nc=int::Parse(textBox10->Text);
			 nd=int::Parse(textBox12->Text);
			 int flag=1;
			 a.append(datedat,str1,str2,str3,str4,ph,na,nb,nc,nd,str6,str7,p,flag);
			 p--;
			 button3->Select();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form26^f26=gcnew form26();
			 f26->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f26->Show();
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
				 textBox6->Select();
		 }
private: System::Void textBox6_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 textBox8->Select();
		 }
private: System::Void textBox8_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 textBox10->Select();
		 }
private: System::Void textBox10_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 textBox12->Select();
		 }
private: System::Void textBox12_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			  if(e->KeyCode==Keys::Enter)
				 comboBox1->Select();
		 }
private: System::Void form25_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 array<Object^>^objectArray1={"morning","afternoon","night","不申请"};
			 comboBox1->Items->AddRange(objectArray1);
			 comboBox1->Text="morning";
			 comboBox2->Items->AddRange(objectArray1);
			 comboBox2->Text="morning";
		 }
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 if(e->KeyCode==Keys::Enter)
				 comboBox2->Select();
		 }
private: System::Void comboBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) 
		 {
			 button1->Select();
		 }
};
}
