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
	/// StuForm 摘要
	/// </summary>
	public ref class StuForm : public System::Windows::Forms::Form
	{
	public:
		StuForm(void)
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
		~StuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lname;

	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox9;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel3;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button17;

	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;

private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Button^  button14;
private: System::Windows::Forms::Button^  button13;

private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Button^  button15;
private: System::Windows::Forms::Label^  labeltype;
protected: 
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StuForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->labeltype = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.97852F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.02148F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(747, 498);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StuForm::tableLayoutPanel1_Paint);
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
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(272, 57);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(467, 427);
			this->tabControl1->TabIndex = 19;
			this->tabControl1->Enter += gcnew System::EventHandler(this, &StuForm::tabControl1_Enter);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->tableLayoutPanel2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(459, 401);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"个人信息维护";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(236, 351);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(123, 35);
			this->button15->TabIndex = 2;
			this->button15->Text = L"查看自己的收藏";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &StuForm::button15_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"宋体", 10));
			this->button12->Location = System::Drawing::Point(77, 351);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(127, 36);
			this->button12->TabIndex = 1;
			this->button12->Text = L"保存所做的修改";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &StuForm::button12_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				36.19048F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				63.80952F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				181)));
			this->tableLayoutPanel2->Controls->Add(this->maskedTextBox1, 1, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox10, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->comboBox2, 1, 7);
			this->tableLayoutPanel2->Controls->Add(this->numericUpDown2, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->comboBox1, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->button11, 2, 9);
			this->tableLayoutPanel2->Controls->Add(this->button10, 2, 8);
			this->tableLayoutPanel2->Controls->Add(this->button9, 2, 7);
			this->tableLayoutPanel2->Controls->Add(this->button8, 2, 6);
			this->tableLayoutPanel2->Controls->Add(this->button7, 2, 5);
			this->tableLayoutPanel2->Controls->Add(this->button6, 2, 4);
			this->tableLayoutPanel2->Controls->Add(this->button5, 2, 3);
			this->tableLayoutPanel2->Controls->Add(this->button4, 2, 2);
			this->tableLayoutPanel2->Controls->Add(this->button3, 2, 1);
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->label6, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->label7, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox3, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox9, 1, 8);
			this->tableLayoutPanel2->Controls->Add(this->numericUpDown1, 1, 5);
			this->tableLayoutPanel2->Location = System::Drawing::Point(34, 16);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 10;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(382, 327);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(77, 296);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(99, 21);
			this->maskedTextBox1->TabIndex = 31;
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox10->Location = System::Drawing::Point(77, 40);
			this->textBox10->Name = L"textBox10";
			this->textBox10->PasswordChar = '*';
			this->textBox10->Size = System::Drawing::Size(99, 21);
			this->textBox10->TabIndex = 33;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"", L"男", L"女"});
			this->comboBox2->Location = System::Drawing::Point(77, 233);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(99, 20);
			this->comboBox2->TabIndex = 32;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(77, 104);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2200, 0, 0, 0});
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2000, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(99, 21);
			this->numericUpDown2->TabIndex = 31;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2000, 0, 0, 0});
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"", L"计算机科学与技术", L"计算机软件", L"网络工程", L"信息安全", L"计算机双语联合班", 
				L"计算机全英创新班"});
			this->comboBox1->Location = System::Drawing::Point(77, 136);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 20);
			this->comboBox1->TabIndex = 1;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(200, 296);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(63, 23);
			this->button11->TabIndex = 29;
			this->button11->Text = L"修改";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(200, 264);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(63, 23);
			this->button10->TabIndex = 28;
			this->button10->Text = L"修改";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(200, 233);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(63, 22);
			this->button9->TabIndex = 27;
			this->button9->Text = L"修改";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &StuForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(200, 200);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(63, 23);
			this->button8->TabIndex = 26;
			this->button8->Text = L"修改";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &StuForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(200, 168);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(63, 23);
			this->button7->TabIndex = 25;
			this->button7->Text = L"修改";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &StuForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(200, 136);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(63, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"修改";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &StuForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(200, 104);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(63, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"修改";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &StuForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(200, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"确认";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &StuForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(200, 39);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(63, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StuForm::button3_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"学号";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"密码";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"确认密码";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 109);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 3;
			this->label4->Text = L"年级";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"专业";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 12);
			this->label6->TabIndex = 5;
			this->label6->Text = L"班级";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 206);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"姓名";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(39, 238);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 12);
			this->label8->TabIndex = 7;
			this->label8->Text = L"性别";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(39, 269);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"邮箱";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 302);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 12);
			this->label10->TabIndex = 9;
			this->label10->Text = L"手机号码";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(77, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 21);
			this->textBox1->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox3->Location = System::Drawing::Point(77, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(99, 21);
			this->textBox3->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox7->Location = System::Drawing::Point(77, 201);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(99, 21);
			this->textBox7->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox9->Location = System::Drawing::Point(77, 265);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(99, 21);
			this->textBox9->TabIndex = 18;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(77, 168);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {8, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(99, 21);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->tableLayoutPanel3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(459, 401);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"毕业设计相关信息";
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"宋体", 10));
			this->button14->Location = System::Drawing::Point(248, 365);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(118, 33);
			this->button14->TabIndex = 3;
			this->button14->Text = L"提交论文";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &StuForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"宋体", 10));
			this->button13->Location = System::Drawing::Point(112, 365);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(118, 33);
			this->button13->TabIndex = 2;
			this->button13->Text = L"保存所做的修改";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &StuForm::button13_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				31.85185F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				68.14815F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				153)));
			this->tableLayoutPanel3->Controls->Add(this->textBox11, 1, 3);
			this->tableLayoutPanel3->Controls->Add(this->label21, 0, 3);
			this->tableLayoutPanel3->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->comboBox4, 1, 4);
			this->tableLayoutPanel3->Controls->Add(this->button17, 2, 5);
			this->tableLayoutPanel3->Controls->Add(this->button19, 2, 3);
			this->tableLayoutPanel3->Controls->Add(this->button20, 2, 2);
			this->tableLayoutPanel3->Controls->Add(this->button21, 2, 1);
			this->tableLayoutPanel3->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->label12, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->label13, 0, 2);
			this->tableLayoutPanel3->Controls->Add(this->label15, 0, 4);
			this->tableLayoutPanel3->Controls->Add(this->textBox4, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->textBox5, 1, 2);
			this->tableLayoutPanel3->Controls->Add(this->label16, 0, 5);
			this->tableLayoutPanel3->Controls->Add(this->textBox12, 1, 5);
			this->tableLayoutPanel3->Location = System::Drawing::Point(30, 30);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 6;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.4375F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.5625F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 186)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(423, 328);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// textBox11
			// 
			this->textBox11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox11->Location = System::Drawing::Point(88, 86);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 21);
			this->textBox11->TabIndex = 34;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(41, 90);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 12);
			this->label21->TabIndex = 32;
			this->label21->Text = L"关键字";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox2->Location = System::Drawing::Point(88, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 21);
			this->textBox2->TabIndex = 33;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"", L"计算机科学与技术", L"计算机软件", L"网络工程", L"信息安全", L"计算机双语联合班", 
				L"计算机全英创新班"});
			this->comboBox4->Location = System::Drawing::Point(88, 115);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 20);
			this->comboBox4->TabIndex = 1;
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button17->Location = System::Drawing::Point(271, 302);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(63, 23);
			this->button17->TabIndex = 25;
			this->button17->Text = L"修改";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(271, 84);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(63, 23);
			this->button19->TabIndex = 23;
			this->button19->Text = L"修改";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &StuForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(271, 55);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(63, 23);
			this->button20->TabIndex = 22;
			this->button20->Text = L"修改";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &StuForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(271, 28);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(63, 21);
			this->button21->TabIndex = 21;
			this->button21->Text = L"修改";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &StuForm::button21_Click);
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(41, 6);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 12);
			this->label11->TabIndex = 0;
			this->label11->Text = L"索引号";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 12);
			this->label12->TabIndex = 1;
			this->label12->Text = L"指导老师ID";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(41, 60);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 12);
			this->label13->TabIndex = 2;
			this->label13->Text = L"论文名";
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(53, 120);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 12);
			this->label15->TabIndex = 4;
			this->label15->Text = L"专业";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(88, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 21);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox5->Location = System::Drawing::Point(88, 56);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 21);
			this->textBox5->TabIndex = 12;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(53, 228);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 12);
			this->label16->TabIndex = 5;
			this->label16->Text = L"摘要";
			// 
			// textBox12
			// 
			this->textBox12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox12->Location = System::Drawing::Point(88, 149);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(177, 170);
			this->textBox12->TabIndex = 35;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(459, 401);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"论文评审结果";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(112, 40);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(11, 12);
			this->label18->TabIndex = 3;
			this->label18->Text = L"0";
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
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(459, 401);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"搜索论文";
			this->tabPage4->Enter += gcnew System::EventHandler(this, &StuForm::tabPage4_Enter);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(188, 190);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 12);
			this->label19->TabIndex = 0;
			this->label19->Text = L"在新窗口中搜索";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(3, 57);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(256, 427);
			this->panel1->TabIndex = 20;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(48, 331);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(172, 49);
			this->panel8->TabIndex = 6;
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(201, 271);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(20, 38);
			this->panel7->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(164, 271);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(20, 38);
			this->panel6->TabIndex = 4;
			this->panel6->Visible = false;
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(201, 186);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(20, 38);
			this->panel5->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(164, 186);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(20, 38);
			this->panel4->TabIndex = 2;
			this->panel4->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(201, 114);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(20, 38);
			this->panel3->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(164, 114);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(20, 38);
			this->panel2->TabIndex = 0;
			this->panel2->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->lname);
			this->flowLayoutPanel1->Controls->Add(this->labeltype);
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
			this->button1->Click += gcnew System::EventHandler(this, &StuForm::button1_Click);
			// 
			// lname
			// 
			this->lname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lname->AutoSize = true;
			this->lname->Location = System::Drawing::Point(359, 8);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(29, 12);
			this->lname->TabIndex = 1;
			this->lname->Text = L"name";
			// 
			// labeltype
			// 
			this->labeltype->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labeltype->AutoSize = true;
			this->labeltype->Location = System::Drawing::Point(306, 8);
			this->labeltype->Name = L"labeltype";
			this->labeltype->Size = System::Drawing::Size(47, 12);
			this->labeltype->TabIndex = 3;
			this->labeltype->Text = L"label20";
			// 
			// label74
			// 
			this->label74->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(247, 8);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(53, 12);
			this->label74->TabIndex = 2;
			this->label74->Text = L"欢迎您！";
			// 
			// StuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 508);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"StuForm";
			this->Text = L"StuForm";
			this->Load += gcnew System::EventHandler(this, &StuForm::StuForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void tabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 if(globalstu.cansearch())
			 {
				 Form2^f1=gcnew Form2();
				 f1->Show();
			 }
			 else
			 {
				 MessageBox::Show("你没有查阅权限！");
			 }
		 }
		 
private: System::Void tabControl1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void StuForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 
			 //名字与用户类型初始化
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
			 
			extern Student globalstu;
			if (globalstu.hassave())
			{
				panel2->Visible=true;
				panel3->Visible=false;
			} 
			else
			{
				panel2->Visible=false;
				panel3->Visible=true;
			}
			if (globalstu.hassubmit())
			{
				panel4->Visible=true;
				panel5->Visible=false;
			} 
			else
			{
				panel4->Visible=false;
				panel5->Visible=true;
			}
			if (globalstu.hasjudge())
			{
				panel6->Visible=true;
				panel7->Visible=false;
				panel8->Visible=false;
			} 
			else
			{
				panel6->Visible=false;
				panel7->Visible=true;
				panel8->Visible=true;
			}
			if (globalstu.hassubmit()||globalstu.hasjudge())
			{
				button13->Enabled=false;
			} 
			else
			{
				button13->Enabled=true;
			}
			if (globalstu.hasjudge())
			{
				button14->Enabled=false;
			} 
			else if(globalstu.hassubmit())
			{
				button14->Enabled=false;
			}
			else
			{
				button14->Enabled=true;
			}

			textBox1->Text=globalstu.getstuid().ToString();
			textBox10->Text=gcnew String(globalstu.getpwd());
			textBox3->Text="";
			numericUpDown2->Value=globalstu.getgradeid();
			comboBox1->Text=gcnew String(globalstu.getsubject());
			comboBox4->Text=gcnew String(globalstu.getsubject());
			numericUpDown1->Value=globalstu.getclassid();
			textBox7->Text=gcnew String(globalstu.getname());
			if (globalstu.getsex())
			{
				comboBox2->Text="男";
			}
			else
			{
				comboBox2->Text="女";
			}
			textBox4->Text=globalstu.getaid().ToString();
			textBox2->Text=globalstu.gettecid().ToString();
			extern Article globalart;
			extern LList<Article>artlist;
			int flag1=0;
			//MessageBox::Show(globalstu.getaid().ToString());
			for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
			{
				if (artlist.getValue().getartid()==globalstu.getaid())
				{
					globalart=Article(artlist.getValue());
					flag1=1;
					break;
				}
			}
			/*for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
			{
				MessageBox::Show(gcnew String(artlist.getValue().getartname())+artlist.getValue().getartid().ToString());
			}*/
			//是否找到
			if (flag1==0)
			{
				MessageBox::Show("还没有保存论文!");
			}
			else
			{
				textBox5->Text=gcnew String(globalart.getartname());
				textBox11->Text=gcnew String(globalart.getkeyword());
				label18->Text=globalart.getmark().ToString();
			}
			/*extern LList<Student>stulist;
			stulist.moveToStart();
			stulist.next();
			stulist.next();
			MessageBox::Show(gcnew String(stulist.getValue().getpwd()));*/
	 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article>finalartresult;
			 extern LList<Article>artlist;
			 extern Student globalstu;
			 int a;
			 Student e1=Student(globalstu);
			 a=finalartresult.length();
			 for (int i=0;i<globalstu.getcolnum();i++)
			 {
				 for (artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
				 {
					 if (artlist.getValue().getartid()==globalstu.getcollection(a)[i].getartid())
					 {
						 finalartresult.insert(artlist.getValue());
					 }
				 }
			 }
			 
			 collection^f1=gcnew collection();
			 f1->Show();
		 }
		
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {	
			  MessageBox::Show("请再次输入密码并点击确认！");
			
			  
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 if (textBox10->Text==textBox3->Text)
			 {
				 char*pwd=(char*)(Marshal::StringToHGlobalAnsi(textBox3->Text)).ToPointer();
				 globalstu.setpwd(pwd);
				 MessageBox::Show("密码修改成功！"+gcnew String(globalstu.getpwd()));
			 }
			 else
			 {
				 MessageBox::Show("密码不一致！");
				 textBox10->Clear();
				 textBox3->Clear();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 globalstu.setgradeid(int::Parse(numericUpDown2->Value.ToString()));
			 extern Article globalart;
			 globalart.setstugrade(int::Parse(numericUpDown2->Value.ToString()));
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			
			  char*sj=(char*)(Marshal::StringToHGlobalAnsi(comboBox1->Text)).ToPointer();
			 globalstu.setsubject(sj);
			  extern Article globalart;
			 globalart.setstusubject(sj);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 globalstu.setclassid(int::Parse(numericUpDown1->Value.ToString()));
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 char*name=(char*)(Marshal::StringToHGlobalAnsi(textBox7->Text)).ToPointer();
			 globalstu.setname(name);
			 extern Article globalart;
			 globalart.setstuname(name);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 char*sex=(char*)(Marshal::StringToHGlobalAnsi(comboBox2->Text)).ToPointer();
			 globalstu.setsex(sex);
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Student>stulist;
			 extern Student globalstu;
			 //MessageBox::Show(stulist.length().ToString());
			 stulist.reset(globalstu);
			//MessageBox::Show(stulist.length().ToString());
			
			/* for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
			 {
				 MessageBox::Show(gcnew String(stulist.getValue().getname())+gcnew String(stulist.getValue().getpwd()));
			 }*/
			 MessageBox::Show("资料保存成功！");
			 
		 }

private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 extern Article globalart;
			 extern LList<Teacher> teclist;
			 extern Teacher globaltec;
			 int x;
			 long tecid=long::Parse(textBox2->Text);
			 x=globalart.getartid();
			 globalstu.settecid(tecid);
			 globalart.settecid(tecid);
			 x=globalart.getartid();
			for (teclist.moveToStart();teclist.currPos()<teclist.length();teclist.next())
			{
				if (teclist.getValue().gettecid()==tecid)
				{
					globalart.settecname(teclist.getValue().getname());
					break;
				}
				
			}
			x=globalart.getartid();
			 MessageBox::Show("关联指导老师成功！");
			 
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Article globalart;
			 globalart.setartname((char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer());
			  MessageBox::Show("论文名修改成功！");
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Article globalart;
			 globalart.setkeyword((char*)(Marshal::StringToHGlobalAnsi(textBox11->Text)).ToPointer());
			  MessageBox::Show("关键字修改成功！");
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if (textBox2->Text==""||textBox5->Text==""||textBox11->Text=="")
			 {
				 MessageBox::Show("请先完善论文信息！");
			 }
			 else
			 {
				 //int flag=0;
				 //for(teclist.moveToStart();teclist.currPos()<teclist.length();teclist.next())
				 //{
					//if(teclist.getValue().gettecid()==int::Parse(textBox2->Text))
					//{
					//	flag=1;
					//	break;
					//}
				 //}
				 //if (flag==0)
				 //{
					// MessageBox::Show("教师ID不存在！");
					// textBox2->Clear();
				 //} 
				 //else
				 //{
					// //进行数据存储
				 //}		 
				 extern LList<Student>stulist;
				 extern Student globalstu;		
				 extern int arcnum;
				 
				 extern LList<Article>artlist;
				 extern Article globalart;
				 long x=globalart.getartid();
				 if (globalart.getartid()==0)
				 {
					 globalart.setartid(++arcnum);
					 globalstu.setaid(arcnum);
					 MessageBox::Show("你的论文已经分配到了一个ID:"+globalstu.getaid().ToString());
					 artlist.insert(globalart);
				 } 
				 else
				 {				
					 artlist.reset(globalart);
				 }	
				 globalart.setsave(true);
				  globalstu.setsave(true);
				  panel2->Visible=true;
				  panel3->Visible=false;
				 /* for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
				  {
					  MessageBox::Show(gcnew String(stulist.getValue().getname())+(stulist.getValue().getaid()).ToString());
				  }*/
				   stulist.reset(globalstu);
				   /*for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
				   {
					   MessageBox::Show(gcnew String(stulist.getValue().getname())+(stulist.getValue().getaid()).ToString());
				   }*/
			 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;		
			 extern LList<Teacher>teclist;
			 extern Teacher globaltec;
			 extern LList<Student>stulist;
			 extern LList<Article>artlist;
			 extern Article globalart;
			 if (!globalstu.hassave())
			 {
				 MessageBox::Show("还没有保存过！");
			 } 
			 else
			 {
				 for(teclist.moveToStart();teclist.currPos()<teclist.length();teclist.next())
				 {
					 if(teclist.getValue().gettecid()==globalstu.gettecid())
					 {
						 globaltec=teclist.getValue();
						 globaltec.addstu(globalstu.getstuid());
						 MessageBox::Show("关联指导老师成功！");
						 teclist.reset(globaltec);
						 break;
					 }
				 }
				 globalstu.setsubmit(true);
				 globalart.setsubmit(true);
				 stulist.reset(globalstu);
				 artlist.reset(globalart);
				 button13->Enabled=false;
				 button14->Enabled=false;
				 panel4->Visible=true;
				 panel5->Visible=false;
			 }
		 }
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
