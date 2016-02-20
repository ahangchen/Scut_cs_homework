#pragma once

namespace 毕业设计管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// mark 摘要
	/// </summary>
	public ref class mark : public System::Windows::Forms::Form
	{
	public:
		mark(void)
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
		~mark()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  lsex;

	private: System::Windows::Forms::Label^  lname;
	private: System::Windows::Forms::Label^  lclass;
	private: System::Windows::Forms::Label^  lsj;

	private: System::Windows::Forms::Label^  lgrade;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lid;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label14;


	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lstuname;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button3;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mark::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->lsex = (gcnew System::Windows::Forms::Label());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->lclass = (gcnew System::Windows::Forms::Label());
			this->lsj = (gcnew System::Windows::Forms::Label());
			this->lgrade = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lid = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lstuname = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				36.01071F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				63.98929F)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tabControl1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.97852F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.02148F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(747, 498);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 45);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(272, 57);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(467, 427);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage1->Controls->Add(this->tableLayoutPanel2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(459, 401);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"学生个人信息";
			this->tabPage1->Click += gcnew System::EventHandler(this, &mark::tabPage1_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				31.85185F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				68.14815F)));
			this->tableLayoutPanel2->Controls->Add(this->label24, 1, 7);
			this->tableLayoutPanel2->Controls->Add(this->label23, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->lsex, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->lname, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->lclass, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->lsj, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->lgrade, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label6, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->lid, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(25, 29);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 8;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(382, 238);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(231, 214);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(41, 12);
			this->label24->TabIndex = 17;
			this->label24->Text = L"lphone";
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(234, 182);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 12);
			this->label23->TabIndex = 16;
			this->label23->Text = L"lmail";
			// 
			// lsex
			// 
			this->lsex->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lsex->AutoSize = true;
			this->lsex->Location = System::Drawing::Point(237, 149);
			this->lsex->Name = L"lsex";
			this->lsex->Size = System::Drawing::Size(29, 12);
			this->lsex->TabIndex = 15;
			this->lsex->Text = L"lsex";
			// 
			// lname
			// 
			this->lname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lname->AutoSize = true;
			this->lname->Location = System::Drawing::Point(234, 117);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(35, 12);
			this->lname->TabIndex = 14;
			this->lname->Text = L"lname";
			// 
			// lclass
			// 
			this->lclass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lclass->AutoSize = true;
			this->lclass->Location = System::Drawing::Point(231, 85);
			this->lclass->Name = L"lclass";
			this->lclass->Size = System::Drawing::Size(41, 12);
			this->lclass->TabIndex = 13;
			this->lclass->Text = L"lclass";
			// 
			// lsj
			// 
			this->lsj->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lsj->AutoSize = true;
			this->lsj->Location = System::Drawing::Point(237, 53);
			this->lsj->Name = L"lsj";
			this->lsj->Size = System::Drawing::Size(29, 12);
			this->lsj->TabIndex = 12;
			this->lsj->Text = L"lexp";
			// 
			// lgrade
			// 
			this->lgrade->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lgrade->AutoSize = true;
			this->lgrade->Location = System::Drawing::Point(231, 27);
			this->lgrade->Name = L"lgrade";
			this->lgrade->Size = System::Drawing::Size(41, 12);
			this->lgrade->TabIndex = 11;
			this->lgrade->Text = L"lgrade";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学号";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(89, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"年级";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(89, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"专业";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(89, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"班级";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(89, 117);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"姓名";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(89, 149);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 12);
			this->label8->TabIndex = 7;
			this->label8->Text = L"性别";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(89, 182);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"邮箱";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(65, 214);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"手机号码";
			// 
			// lid
			// 
			this->lid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lid->AutoSize = true;
			this->lid->Location = System::Drawing::Point(240, 6);
			this->lid->Name = L"lid";
			this->lid->Size = System::Drawing::Size(23, 12);
			this->lid->TabIndex = 10;
			this->lid->Text = L"lid";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->tableLayoutPanel3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(459, 401);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"毕业设计相关信息";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(243, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"审核不通过";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mark::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 372);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"审核通过";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mark::button2_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tableLayoutPanel3->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				31.85185F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				68.14815F)));
			this->tableLayoutPanel3->Controls->Add(this->textBox11, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->label21, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->comboBox4, 1, 4);
			this->tableLayoutPanel3->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label12, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label13, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->label15, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox5, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->label16, 0, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox12, 1, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox4, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(30, 16);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 6;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.4375F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.5625F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 186)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(423, 350);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox11->Location = System::Drawing::Point(140, 99);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 21);
			this->textBox11->TabIndex = 34;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(90, 103);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 12);
			this->label21->TabIndex = 32;
			this->label21->Text = L"关键字";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox2->Location = System::Drawing::Point(140, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 21);
			this->textBox2->TabIndex = 33;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"", L"计算机科学与技术", L"计算机软件", L"网络工程", L"信息安全", L"计算机双语联合班", 
				L"计算机全英创新班"});
			this->comboBox4->Location = System::Drawing::Point(140, 131);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 20);
			this->comboBox4->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(90, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 12);
			this->label11->TabIndex = 0;
			this->label11->Text = L"索引号";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(66, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 12);
			this->label12->TabIndex = 1;
			this->label12->Text = L"指导老师ID";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(90, 70);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 12);
			this->label13->TabIndex = 2;
			this->label13->Text = L"论文名";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(102, 136);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 12);
			this->label15->TabIndex = 4;
			this->label15->Text = L"专业";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox5->Location = System::Drawing::Point(140, 66);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 21);
			this->textBox5->TabIndex = 12;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(102, 247);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 12);
			this->label16->TabIndex = 5;
			this->label16->Text = L"摘要";
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox12->Location = System::Drawing::Point(140, 168);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(203, 170);
			this->textBox12->TabIndex = 35;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(140, 6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 21);
			this->textBox4->TabIndex = 10;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(459, 401);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"论文评议";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 10));
			this->button12->Location = System::Drawing::Point(166, 315);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(127, 36);
			this->button12->TabIndex = 5;
			this->button12->Text = L"提交审核结果";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &mark::button12_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(109, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(51, 21);
			this->textBox1->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(109, 74);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(302, 211);
			this->textBox6->TabIndex = 2;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(47, 72);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(41, 12);
			this->label17->TabIndex = 1;
			this->label17->Text = L"评语：";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(47, 42);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 12);
			this->label14->TabIndex = 0;
			this->label14->Text = L"分数：";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(3, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(256, 427);
			this->panel1->TabIndex = 20;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->lstuname);
			this->flowLayoutPanel1->Controls->Add(this->label74);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(272, 13);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(472, 27);
			this->flowLayoutPanel1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(394, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"退出";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mark::button1_Click);
			// 
			// lstuname
			// 
			this->lstuname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lstuname->AutoSize = true;
			this->lstuname->Location = System::Drawing::Point(388, 8);
			this->lstuname->Name = L"lstuname";
			this->lstuname->Size = System::Drawing::Size(0, 12);
			this->lstuname->TabIndex = 1;
			// 
			// label74
			// 
			this->label74->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(329, 8);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(53, 12);
			this->label74->TabIndex = 2;
			this->label74->Text = L"欢迎您！";
			// 
			// mark
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 516);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"mark";
			this->Text = L"mark";
			this->Load += gcnew System::EventHandler(this, &mark::mark_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void mark_Load(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 extern Article globalart;
			 lid->Text=globalstu.getstuid().ToString();
			 
			 lgrade->Text=globalstu.getgradeid().ToString();
			 lsj->Text=gcnew String(globalstu.getsubject());
			
			 lclass->Text=globalstu.getclassid().ToString();
			 lname->Text=gcnew String(globalstu.getname());
			 if (globalstu.getsex())
			 {
				 lsex->Text="男";
			 }
			 else
			 {
				 lsex->Text="女";
			 }
			 textBox4->Text=globalstu.getaid().ToString();
			 textBox2->Text=globalstu.gettecid().ToString();
			 textBox5->Text=gcnew String(globalart.getartname());
			 textBox11->Text=gcnew String(globalart.getkeyword());
			 comboBox4->Text=gcnew String(globalart.getstusubject());
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 extern Article globalart;
			 extern LList<Student>stulist;
			 extern LList<Article>artlist;
			 globalart.setjudge(true);
			 globalstu.setjudge(true);
			 stulist.reset(globalstu);
			 artlist.reset(globalart);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 extern Article globalart;
			 extern LList<Student>stulist;
			 extern LList<Article>artlist;
			 globalart.setsubmit(false);
			 globalstu.setsubmit(false);
			 stulist.reset(globalstu);
			 artlist.reset(globalart);
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 int stumark=int::Parse(textBox1->Text);
			 extern Article globalart;
			 globalart.setmark(stumark);
			 extern LList<Article>artlist;
			 artlist.reset(globalart);
		 }
};
}
