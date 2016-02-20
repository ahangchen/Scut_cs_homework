#pragma once
#include"form27.h"
namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form24 摘要
	/// </summary>
	public ref class form24 : public System::Windows::Forms::Form
	{
	public:
		form24(void)
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
		~form24()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button4;
	protected: 
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
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
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;


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
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form24::typeid));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(84, 233);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 26);
			this->button4->TabIndex = 43;
			this->button4->Text = L"开始";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &form24::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(224, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 26);
			this->button3->TabIndex = 42;
			this->button3->Text = L"退出";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form24::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(155, 233);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 27);
			this->button2->TabIndex = 41;
			this->button2->Text = L"下一条";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form24::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 233);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 27);
			this->button1->TabIndex = 40;
			this->button1->Text = L"第一条";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form24::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1, 7);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(291, 220);
			this->tabControl1->TabIndex = 39;
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
			this->tabPage1->Size = System::Drawing::Size(283, 195);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"基本信息";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(79, 138);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(190, 21);
			this->textBox5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(79, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(190, 21);
			this->textBox4->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(79, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(190, 21);
			this->textBox3->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 21);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 21);
			this->textBox1->TabIndex = 5;
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
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 21);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(283, 195);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"物资详情";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(73, 72);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(53, 12);
			this->label29->TabIndex = 22;
			this->label29->Text = L"借用数量";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(141, 20);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 12);
			this->label28->TabIndex = 21;
			this->label28->Text = L"借出数目";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(209, 72);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 12);
			this->label12->TabIndex = 20;
			this->label12->Text = L"使用时段";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(141, 72);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 12);
			this->label11->TabIndex = 19;
			this->label11->Text = L"当天余量";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(211, 156);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(49, 21);
			this->textBox15->TabIndex = 16;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(143, 156);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(49, 21);
			this->textBox14->TabIndex = 15;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(75, 156);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(49, 21);
			this->textBox13->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(211, 126);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(49, 21);
			this->textBox12->TabIndex = 13;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(143, 126);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(49, 21);
			this->textBox11->TabIndex = 12;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(75, 124);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(49, 21);
			this->textBox10->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(143, 87);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(49, 21);
			this->textBox9->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(75, 87);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(49, 21);
			this->textBox8->TabIndex = 9;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(143, 41);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(49, 21);
			this->textBox7->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(75, 41);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(49, 21);
			this->textBox6->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(73, 20);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 4;
			this->label10->Text = L"借用数量";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(22, 156);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 12);
			this->label9->TabIndex = 3;
			this->label9->Text = L"音响";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 12);
			this->label8->TabIndex = 2;
			this->label8->Text = L"无线麦";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 1;
			this->label7->Text = L"桌子";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 44);
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
			this->tabPage3->Size = System::Drawing::Size(283, 195);
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
			// button5
			// 
			this->button5->Location = System::Drawing::Point(306, 101);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 47);
			this->button5->TabIndex = 44;
			this->button5->Text = L"修改";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &form24::button5_Click);
			// 
			// form24
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(313, 267);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form24";
			this->Text = L"按音响查询";
			this->Load += gcnew System::EventHandler(this, &form24::form24_Load);
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
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Close();
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 button5->Enabled=true;
			 extern int actyear,actmonth,actday;
			 date b;
			 manageactivity a;
			 extern int p;
			 p=0;
			 extern char*datedat;
			 extern char*datetxt;
			 b.setnum(datedat);
			 char actname[50]="",holder[50]="",place[50]="",responser[50]="";//
			 long phone=0;
			 int chairnum=0,desknum=0,micpnum=0,audionum=0;
			 daypart micppart=morning,audiopart=morning;
			 a.showwithaudio(datedat,actname,holder,place,responser,phone,
				 chairnum,desknum,micpnum,audionum,micppart,audiopart,p);
			 String^sactname=gcnew String(actname);
			 String^sholder=gcnew String(holder);
			 String^splace=gcnew String(place);
			 String^sresponser=gcnew String(responser);
			 String^smp="";
			 switch(micppart)
				{
				case morning:smp="上午";break;
				case afternoon:smp="下午";break;
				case night:smp="晚上";break;
				case 不申请:smp="不申请";break;
				}
			 String^sap="";
			 switch(audiopart)
				{
				case morning:sap="上午";break;
				case afternoon:sap="下午";break;
				case night:sap="晚上";break;
				case 不申请:sap="不申请";break;
				}
			 textBox1->Text=sactname;
			 textBox2->Text=sholder;
			 textBox3->Text=splace;
			 textBox4->Text=sresponser;
			 textBox5->Text=phone.ToString();
			 textBox6->Text=chairnum.ToString();
			 textBox7->Text=b.chair.ToString();
			 textBox8->Text=desknum.ToString();
			 textBox9->Text=b.desk.ToString();
			 textBox10->Text=micpnum.ToString();
			 textBox11->Text=b.micp.ToString();
			 textBox12->Text=smp;
			 textBox13->Text=audionum.ToString();
			 textBox14->Text=b.audio.ToString();
			 textBox15->Text=sap;
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
			 char actname[50]="",holder[50]="",place[50]="",responser[50]="";//
			 long phone=0;
			 int chairnum=0,desknum=0,micpnum=0,audionum=0;
			 daypart micppart=morning,audiopart=morning;
			 a.showwithaudio(datedat,actname,holder,place,responser,phone,
				 chairnum,desknum,micpnum,audionum,micppart,audiopart,p);
			 String^sactname=gcnew String(actname);
			 String^sholder=gcnew String(holder);
			 String^splace=gcnew String(place);
			 String^sresponser=gcnew String(responser);
			 String^smp="";
			 switch(micppart)
				{
				case morning:smp="上午";break;
				case afternoon:smp="下午";break;
				case night:smp="晚上";break;
				case 不申请:smp="不申请";break;
				}
			 String^sap="";
			 switch(audiopart)
				{
				case morning:sap="上午";break;
				case afternoon:sap="下午";break;
				case night:sap="晚上";break;
				case 不申请:sap="不申请";break;
				}
			 textBox1->Text=sactname;
			 textBox2->Text=sholder;
			 textBox3->Text=splace;
			 textBox4->Text=sresponser;
			 textBox5->Text=phone.ToString();
			 textBox6->Text=chairnum.ToString();
			 textBox7->Text=b.chair.ToString();
			 textBox8->Text=desknum.ToString();
			 textBox9->Text=b.desk.ToString();
			 textBox10->Text=micpnum.ToString();
			 textBox11->Text=b.micp.ToString();
			 textBox12->Text=smp;
			 textBox13->Text=audionum.ToString();
			 textBox14->Text=b.audio.ToString();
			 textBox15->Text=sap;
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 extern int actyear,actmonth,actday;
			 date b;
			 manageactivity a;
			 extern int p;
			 p++;
			 extern char*datedat;
			 extern char*datetxt;
			 b.setnum(datedat);
			 char actname[50]="",holder[50]="",place[50]="",responser[50]="";//
			 long phone=0;
			 int chairnum=0,desknum=0,micpnum=0,audionum=0;
			 daypart micppart=morning,audiopart=morning;
			 a.showwithaudio(datedat,actname,holder,place,responser,phone,
				 chairnum,desknum,micpnum,audionum,micppart,audiopart,p);
			 String^sactname=gcnew String(actname);
			 String^sholder=gcnew String(holder);
			 String^splace=gcnew String(place);
			 String^sresponser=gcnew String(responser);
			 String^smp="";
			 switch(micppart)
				{
				case morning:smp="上午";break;
				case afternoon:smp="下午";break;
				case night:smp="晚上";break;
				case 不申请:smp="不申请";break;
				}
			 String^sap="";
			 switch(audiopart)
				{
				case morning:sap="上午";break;
				case afternoon:sap="下午";break;
				case night:sap="晚上";break;
				case 不申请:sap="不申请";break;
				}
			 textBox1->Text=sactname;
			 textBox2->Text=sholder;
			 textBox3->Text=splace;
			 textBox4->Text=sresponser;
			 textBox5->Text=phone.ToString();
			 textBox6->Text=chairnum.ToString();
			 textBox7->Text=b.chair.ToString();
			 textBox8->Text=desknum.ToString();
			 textBox9->Text=b.desk.ToString();
			 textBox10->Text=micpnum.ToString();
			 textBox11->Text=b.micp.ToString();
			 textBox12->Text=smp;
			 textBox13->Text=audionum.ToString();
			 textBox14->Text=b.audio.ToString();
			 textBox15->Text=sap;
		 }
private: System::Void form24_Load(System::Object^  sender, System::EventArgs^  e) 
		 {
			 button5->Hide();
			 button5->Enabled=false;
			 extern int changesign;
			 if(changesign==1)
			 {
				 this->Width+=60;
				 button5->Show();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 form27^f27=gcnew form27();
			 f27->StartPosition=FormStartPosition::WindowsDefaultLocation;
			 f27->Show();
			 button3->Select();
		 }
};
}
