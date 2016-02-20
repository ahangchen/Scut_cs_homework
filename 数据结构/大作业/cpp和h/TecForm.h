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
	/// TecForm 摘要
	/// </summary>
	public ref class TecForm : public System::Windows::Forms::Form
	{
	public:
		TecForm(void)
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
		~TecForm()
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
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::ComboBox^  comboBox2;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox9;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lname;

	private: System::Windows::Forms::Label^  label74;











	private: System::Windows::Forms::Label^  tnum;
	private: System::Windows::Forms::Label^  snum;
	private: System::Windows::Forms::Label^  wnum;




















































private: System::Windows::Forms::ListView^  listView1;
private: System::Windows::Forms::ColumnHeader^  columnHeader1;
private: System::Windows::Forms::ColumnHeader^  columnHeader2;
private: System::Windows::Forms::ColumnHeader^  columnHeader3;
private: System::Windows::Forms::ColumnHeader^  columnHeader4;
private: System::Windows::Forms::Label^  labeltype;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TecForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tnum = (gcnew System::Windows::Forms::Label());
			this->snum = (gcnew System::Windows::Forms::Label());
			this->wnum = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->labeltype = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				40.93023F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				59.06977F)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tabControl1, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.97852F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.02148F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(672, 454);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 43);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Controls->Add(this->tnum);
			this->panel1->Controls->Add(this->snum);
			this->panel1->Controls->Add(this->wnum);
			this->panel1->Location = System::Drawing::Point(3, 52);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(256, 391);
			this->panel1->TabIndex = 20;
			// 
			// tnum
			// 
			this->tnum->AutoSize = true;
			this->tnum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tnum->Location = System::Drawing::Point(191, 280);
			this->tnum->Name = L"tnum";
			this->tnum->Size = System::Drawing::Size(17, 20);
			this->tnum->TabIndex = 2;
			this->tnum->Text = L"0";
			// 
			// snum
			// 
			this->snum->AutoSize = true;
			this->snum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->snum->Location = System::Drawing::Point(191, 199);
			this->snum->Name = L"snum";
			this->snum->Size = System::Drawing::Size(17, 20);
			this->snum->TabIndex = 1;
			this->snum->Text = L"0";
			// 
			// wnum
			// 
			this->wnum->AutoSize = true;
			this->wnum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->wnum->Location = System::Drawing::Point(191, 133);
			this->wnum->Name = L"wnum";
			this->wnum->Size = System::Drawing::Size(17, 20);
			this->wnum->TabIndex = 0;
			this->wnum->Text = L"0";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->lname);
			this->flowLayoutPanel1->Controls->Add(this->labeltype);
			this->flowLayoutPanel1->Controls->Add(this->label74);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(326, 11);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(343, 27);
			this->flowLayoutPanel1->TabIndex = 18;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TecForm::flowLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(265, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"退出";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TecForm::button1_Click);
			// 
			// lname
			// 
			this->lname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lname->AutoSize = true;
			this->lname->Location = System::Drawing::Point(230, 8);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(29, 12);
			this->lname->TabIndex = 1;
			this->lname->Text = L"name";
			// 
			// labeltype
			// 
			this->labeltype->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labeltype->AutoSize = true;
			this->labeltype->Location = System::Drawing::Point(183, 8);
			this->labeltype->Name = L"labeltype";
			this->labeltype->Size = System::Drawing::Size(41, 12);
			this->labeltype->TabIndex = 3;
			this->labeltype->Text = L"label4";
			// 
			// label74
			// 
			this->label74->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(124, 8);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(53, 12);
			this->label74->TabIndex = 2;
			this->label74->Text = L"欢迎您！";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(278, 52);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(369, 391);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->tableLayoutPanel2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(361, 365);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"个人信息维护";
			this->tabPage1->Click += gcnew System::EventHandler(this, &TecForm::tabPage1_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 10));
			this->button12->Location = System::Drawing::Point(104, 293);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(127, 36);
			this->button12->TabIndex = 1;
			this->button12->Text = L"保存所做的修改";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &TecForm::button12_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				31.85185F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				68.14815F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				158)));
			this->tableLayoutPanel2->Controls->Add(this->textBox10, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->button4, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->button3, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox3, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->button6, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->comboBox1, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->comboBox2, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->textBox9, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->maskedTextBox1, 1, 7);
			this->tableLayoutPanel2->Controls->Add(this->button8, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->button9, 2, 5);
			this->tableLayoutPanel2->Controls->Add(this->button10, 2, 6);
			this->tableLayoutPanel2->Controls->Add(this->button11, 2, 7);
			this->tableLayoutPanel2->Location = System::Drawing::Point(6, 20);
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
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(359, 237);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox10->Location = System::Drawing::Point(67, 36);
			this->textBox10->Name = L"textBox10";
			this->textBox10->PasswordChar = '*';
			this->textBox10->Size = System::Drawing::Size(120, 21);
			this->textBox10->TabIndex = 33;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(203, 65);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"确认";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TecForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(203, 34);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TecForm::button3_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"工号";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"确认密码";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(67, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 21);
			this->textBox1->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox3->Location = System::Drawing::Point(67, 66);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(120, 21);
			this->textBox3->TabIndex = 12;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(203, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"修改";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &TecForm::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"", L"讲师", L"副教授", L"教授", L"助理实验师"});
			this->comboBox1->Location = System::Drawing::Point(67, 94);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(120, 20);
			this->comboBox1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 99);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"职称";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"姓名";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 12);
			this->label8->TabIndex = 7;
			this->label8->Text = L"性别";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 187);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"邮箱";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 216);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"手机号码";
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox7->Location = System::Drawing::Point(67, 124);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(120, 21);
			this->textBox7->TabIndex = 16;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"", L"男", L"女"});
			this->comboBox2->Location = System::Drawing::Point(67, 152);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(120, 20);
			this->comboBox2->TabIndex = 32;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox9->Location = System::Drawing::Point(67, 182);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(120, 21);
			this->textBox9->TabIndex = 18;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(67, 211);
			this->maskedTextBox1->Mask = L"00000000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(120, 21);
			this->maskedTextBox1->TabIndex = 31;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(203, 123);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(63, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"修改";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &TecForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(203, 152);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(63, 22);
			this->button9->TabIndex = 27;
			this->button9->Text = L"修改";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &TecForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(203, 181);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(63, 23);
			this->button10->TabIndex = 28;
			this->button10->Text = L"修改";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(203, 211);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 23);
			this->button11->TabIndex = 29;
			this->button11->Text = L"修改";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->listView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(361, 365);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"指导的学生";
			this->tabPage2->Click += gcnew System::EventHandler(this, &TecForm::tabPage2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 297);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"查看";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TecForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(136, 299);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 12);
			this->label4->TabIndex = 7;
			this->label4->Text = L"输入学号审核论文";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4});
			this->listView1->Location = System::Drawing::Point(6, 23);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(343, 246);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"学生姓名";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"索引号";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 69;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"学号";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 113;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"状态";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 93;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(361, 365);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"搜索论文";
			this->tabPage4->Enter += gcnew System::EventHandler(this, &TecForm::tabPage4_Enter);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(123, 185);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 12);
			this->label19->TabIndex = 0;
			this->label19->Text = L"在新窗口中搜索";
			// 
			// TecForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(717, 469);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"TecForm";
			this->Text = L"TecForm";
			this->Load += gcnew System::EventHandler(this, &TecForm::TecForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 }
private: System::Void tabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 if(globaltec.cansearch())
			 {
				 Form2^f1=gcnew Form2();
				 f1->Show();
			 }
			 else
			 {
				 MessageBox::Show("你没有查阅权限！");
			 }
			  
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 mark^mark1=gcnew mark();
			 mark1->Show();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void TecForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 extern int usertype;
			 extern char username[50];
			 String^s=gcnew String("");
			 switch(usertype)
			 {
			 case 0:s=gcnew String("游客");break;
			 case 1:s=gcnew String("学生");break;
			 case 2:s=gcnew String("老师");break;
			 case 3:s=gcnew String("管理员");break;
			 }
			 String^s1=gcnew String(username);
			 this->labeltype->Text=s;
			 this->lname->Text=s1;
			 extern Teacher globaltec;
			 textBox1->Text=globaltec.gettecid().ToString();
			 textBox10->Text=gcnew String( globaltec.getpwd());
			 comboBox1->Text=gcnew String(globaltec.getprofrank());
			 textBox7->Text=gcnew String(globaltec.getname());
			 if (globaltec.getsex())
			 {
				 comboBox2->Text="男";
			 }
			else
			{
				comboBox2->Text="女";
			}
			 tnum->Text=globaltec.getstunum().ToString();
			 extern LList<Student>stulist;
			 extern LList<Student>checkstulist;
			 int count1=0;
			 int x=0;
			 for (int i=0;i<globaltec.getstunum();i++)
			 {
				 for (stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
				 {
					 if (stulist.getValue().getstuid()==globaltec.getstulist(x)[i])
					 {
						 checkstulist.insert(Student(stulist.getValue()));
						 if (stulist.getValue().hasjudge())
						 {
							 count1++;						 
						 }
						 break;
					 }
				 }
			 }
			 snum->Text=count1.ToString();
			 wnum->Text=(globaltec.getstunum()-count1).ToString();

			 //listview
			 array<String^>^snamelist=gcnew array<String^>(checkstulist.length());
			 array<String^>^aidlist=gcnew array<String^>(checkstulist.length());
			 array<String^>^sidlist=gcnew array<String^>(checkstulist.length());
			 array<String^>^statelist=gcnew array<String^>(checkstulist.length());
			 
			 for (int i=0;i<checkstulist.length();i++,checkstulist.next())
			 {

				 snamelist[i]=gcnew String(checkstulist.getValue().getname());
				 aidlist[i]=checkstulist.getValue().getaid().ToString();
				 sidlist[i]=checkstulist.getValue().getstuid().ToString();
				 if (checkstulist.getValue().hasjudge())
				 {
					 statelist[i]="已审核";
				 } 
				 else
				 {
					 statelist[i]="未审核";
				 }
			 }
			 for (int i=0;i<checkstulist.length();i++)
			 {
				 ListViewItem^listItem=gcnew ListViewItem(snamelist[i]);
				 listItem->SubItems->Add(aidlist[i]);
				 listItem->SubItems->Add(sidlist[i]);
				 listItem->SubItems->Add(statelist[i]);
				 listView1->Items->Add(listItem);
			 }

		 }
private: System::Void flowLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Student>checkstulist;
			 extern Student globalstu;
			 extern Article globalart;
			 extern LList<Article>artlist;
			 long sid=long::Parse(textBox2->Text);
			 for (checkstulist.moveToStart();checkstulist.currPos();checkstulist.next())
			 {
				 if (checkstulist.getValue().getstuid()==sid)
				 {
					 globalstu=Student(checkstulist.getValue());
					 for (artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
					 {
						 if (artlist.getValue().getartid()==globalstu.getaid())
						 {
							 globalart=Article(artlist.getValue());
							 break;
						 }
					 }
					 break;
				 }
			 }
			 
			 mark^aif=gcnew mark();
			 aif->Show();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			   MessageBox::Show("请再次输入密码并点击确认！");
		 }

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 if (textBox10->Text==textBox3->Text)
			 {
				 char*pwd=(char*)(Marshal::StringToHGlobalAnsi(textBox3->Text)).ToPointer();
				 globaltec.setpwd(pwd);
				 MessageBox::Show("密码修改成功！"+gcnew String(globaltec.getpwd()));
			 }
			 else
			 {
				 MessageBox::Show("密码不一致！");
				 textBox10->Clear();
				 textBox3->Clear();
			 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 globaltec.setprorank((char*)(Marshal::StringToHGlobalAnsi(comboBox1->Text)).ToPointer());
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 globaltec.setname((char*)(Marshal::StringToHGlobalAnsi(textBox7->Text)).ToPointer());
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 char*sex=(char*)(Marshal::StringToHGlobalAnsi(comboBox2->Text)).ToPointer();
			 globaltec.setsex(sex);
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Teacher>teclist;
			 extern Teacher globaltec;
			 //MessageBox::Show(stulist.length().ToString());
			 teclist.reset(globaltec);
			//MessageBox::Show(stulist.length().ToString());
			
			/* for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
			 {
				 MessageBox::Show(gcnew String(stulist.getValue().getname())+gcnew String(stulist.getValue().getpwd()));
			 }*/
			 MessageBox::Show("资料保存成功！");
		 }
};
}
