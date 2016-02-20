#pragma once

namespace 毕业设计管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// manageForm 摘要
	/// </summary>
	public ref class manageForm : public System::Windows::Forms::Form
	{
	public:
		manageForm(void)
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
		~manageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected: 

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  tnum;
	private: System::Windows::Forms::Label^  snum;
	private: System::Windows::Forms::Label^  wnum;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lname;

	private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::PictureBox^  pictureBox1;


private: System::Windows::Forms::TabPage^  tabPage2;















































private: System::Windows::Forms::ListView^  listView3;

private: System::Windows::Forms::ColumnHeader^  columnHeader13;
private: System::Windows::Forms::ColumnHeader^  columnHeader14;
private: System::Windows::Forms::ColumnHeader^  columnHeader15;
private: System::Windows::Forms::ColumnHeader^  columnHeader16;


private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TextBox^  textBox4;

private: System::Windows::Forms::Label^  labeltype;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(manageForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tnum = (gcnew System::Windows::Forms::Label());
			this->snum = (gcnew System::Windows::Forms::Label());
			this->wnum = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->labeltype = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel3->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				39.73214F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				60.26786F)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tabControl1, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(18, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.97852F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.02148F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(672, 483);
			this->tableLayoutPanel1->TabIndex = 2;
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
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->tnum);
			this->panel1->Controls->Add(this->snum);
			this->panel1->Controls->Add(this->wnum);
			this->panel1->Location = System::Drawing::Point(3, 56);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(256, 391);
			this->panel1->TabIndex = 20;
			// 
			// tnum
			// 
			this->tnum->AutoSize = true;
			this->tnum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->tnum->Location = System::Drawing::Point(181, 279);
			this->tnum->Name = L"tnum";
			this->tnum->Size = System::Drawing::Size(0, 20);
			this->tnum->TabIndex = 2;
			// 
			// snum
			// 
			this->snum->AutoSize = true;
			this->snum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->snum->Location = System::Drawing::Point(181, 204);
			this->snum->Name = L"snum";
			this->snum->Size = System::Drawing::Size(0, 20);
			this->snum->TabIndex = 1;
			// 
			// wnum
			// 
			this->wnum->AutoSize = true;
			this->wnum->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->wnum->Location = System::Drawing::Point(181, 128);
			this->wnum->Name = L"wnum";
			this->wnum->Size = System::Drawing::Size(0, 20);
			this->wnum->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(269, 56);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(390, 424);
			this->tabControl1->TabIndex = 19;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(382, 398);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"教师权限管理";
			this->tabPage1->Click += gcnew System::EventHandler(this, &manageForm::tabPage1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(191, 216);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 43);
			this->button7->TabIndex = 13;
			this->button7->Text = L"举报权限授予";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &manageForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(63, 216);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 42);
			this->button6->TabIndex = 12;
			this->button6->Text = L"举报权限去除";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &manageForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(191, 140);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 42);
			this->button5->TabIndex = 11;
			this->button5->Text = L"授予查找权限";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &manageForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(63, 140);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 42);
			this->button4->TabIndex = 10;
			this->button4->Text = L"查找权限去除";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &manageForm::button4_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Location = System::Drawing::Point(27, 87);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(349, 29);
			this->panel2->TabIndex = 9;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(253, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 4;
			this->button12->Text = L"找到教师";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &manageForm::button12_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(5, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"输入工号管理权限";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(114, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(120, 21);
			this->textBox4->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(382, 398);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"学生权限管理";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(186, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 43);
			this->button2->TabIndex = 18;
			this->button2->Text = L"举报权限授予";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &manageForm::button2_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(58, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(98, 42);
			this->button8->TabIndex = 17;
			this->button8->Text = L"举报权限去除";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &manageForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(186, 166);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 42);
			this->button9->TabIndex = 16;
			this->button9->Text = L"授予查找权限";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &manageForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(58, 166);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(98, 42);
			this->button10->TabIndex = 15;
			this->button10->Text = L"查找权限去除";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &manageForm::button10_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Location = System::Drawing::Point(27, 113);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(329, 29);
			this->panel4->TabIndex = 14;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(240, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 19;
			this->button13->Text = L"找到学生";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &manageForm::button13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 12);
			this->label1->TabIndex = 3;
			this->label1->Text = L"输入学号管理权限";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 21);
			this->textBox1->TabIndex = 2;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(382, 398);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"搜索论文";
			this->tabPage4->Enter += gcnew System::EventHandler(this, &manageForm::tabPage4_Enter);
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(138, 192);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 12);
			this->label19->TabIndex = 0;
			this->label19->Text = L"在新窗口中搜索";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Controls->Add(this->listView3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(382, 398);
			this->tabPage3->TabIndex = 4;
			this->tabPage3->Text = L"举报记录";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 328);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 21);
			this->textBox2->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 331);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 12);
			this->label4->TabIndex = 12;
			this->label4->Text = L"输入索引号";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(243, 326);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(111, 23);
			this->button11->TabIndex = 11;
			this->button11->Text = L"从举报记录中移除";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &manageForm::button11_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(14, 276);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(340, 29);
			this->panel3->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 8);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 12);
			this->label3->TabIndex = 3;
			this->label3->Text = L"输入索引号查看详情";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(122, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(120, 21);
			this->textBox7->TabIndex = 2;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(248, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"查看";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &manageForm::button3_Click);
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader13, this->columnHeader14, 
				this->columnHeader15, this->columnHeader16});
			this->listView3->Location = System::Drawing::Point(14, 21);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(352, 237);
			this->listView3->TabIndex = 3;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"举报者ID";
			this->columnHeader13->Width = 72;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"索引号";
			this->columnHeader14->Width = 83;
			// 
			// columnHeader15
			// 
			this->columnHeader15->Text = L"举报论文作者";
			this->columnHeader15->Width = 90;
			// 
			// columnHeader16
			// 
			this->columnHeader16->Text = L"关联指导老师";
			this->columnHeader16->Width = 95;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->lname);
			this->flowLayoutPanel1->Controls->Add(this->labeltype);
			this->flowLayoutPanel1->Controls->Add(this->label74);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(337, 13);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(332, 27);
			this->flowLayoutPanel1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(254, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"退出";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &manageForm::button1_Click);
			// 
			// lname
			// 
			this->lname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lname->AutoSize = true;
			this->lname->Location = System::Drawing::Point(219, 8);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(29, 12);
			this->lname->TabIndex = 1;
			this->lname->Text = L"name";
			// 
			// labeltype
			// 
			this->labeltype->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labeltype->AutoSize = true;
			this->labeltype->Location = System::Drawing::Point(184, 8);
			this->labeltype->Name = L"labeltype";
			this->labeltype->Size = System::Drawing::Size(29, 12);
			this->labeltype->TabIndex = 3;
			this->labeltype->Text = L"name";
			// 
			// label74
			// 
			this->label74->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(125, 8);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(53, 12);
			this->label74->TabIndex = 2;
			this->label74->Text = L"欢迎您！";
			// 
			// manageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(703, 508);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"manageForm";
			this->Text = L"manageForm";
			this->Load += gcnew System::EventHandler(this, &manageForm::manageForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void tabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
			 Form2^f1=gcnew Form2();
			f1->Show();
		 }
private: System::Void listView2_BeforeLabelEdit(System::Object^  sender, System::Windows::Forms::LabelEditEventArgs^  e) {
			 MessageBox::Show("haha");
		 }
private: System::Void listView2_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
			  MessageBox::Show("haha2");
		 }
private: System::Void manageForm_Load(System::Object^  sender, System::EventArgs^  e) {
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
			 extern LList<Record>replist;
			 extern LList<Article>artlist;
			 LList<Article>finallist;
			 for (replist.moveToStart();replist.currPos()<replist.length();replist.next())
			 {
				 for (artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
				 {
					 if (artlist.getValue().getartid()==replist.getValue().getartid())
					 {
						 finallist.insert(artlist.getValue());
						 break;
					 }
				 }
				 
			 }
			 //listview
			 array<String^>^uidlist=gcnew array<String^>(replist.length());
			 array<String^>^aidlist=gcnew array<String^>(replist.length());
			 array<String^>^sidlist=gcnew array<String^>(replist.length());
			 array<String^>^tidlist=gcnew array<String^>(replist.length());
			 finallist.moveToStart();
			 replist.moveToStart();
			 for (int i=0;i<finallist.length();i++,replist.next())
			 {
				 uidlist[i]=(replist.getValue().getuserid()).ToString();
				 aidlist[i]=finallist.getValue().getartid().ToString();
				 sidlist[i]=finallist.getValue().getstuid().ToString();
				 tidlist[i]=finallist.getValue().gettecid().ToString();
				 finallist.next();
			 }
			 for (int i=0;i<replist.length();i++)
			 {
				 ListViewItem^listItem=gcnew ListViewItem(uidlist[i]);
				 listItem->SubItems->Add(aidlist[i]);
				 listItem->SubItems->Add(sidlist[i]);
				 listItem->SubItems->Add(tidlist[i]);
				 listView3->Items->Add(listItem);
			 }
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article> artlist;
			 extern Article globalart;
			 for (artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
			 {
				 if (artlist.getValue().getartid()==long::Parse(textBox7->Text))
				 {
					 globalart=Article(artlist.getValue());
					 break;
				 }
			 }
			 artlist.reset(globalart);
			 Articleinfo^f1=gcnew Articleinfo();
			 f1->Show();
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Record>replist;
			 long rid=long::Parse(textBox2->Text);
			 for(replist.moveToStart();replist.currPos()<replist.length();replist.next())
			 {
				 if(replist.getValue().getartid()==rid)
				 {
					 replist.remove();
				 break;
				 }
			 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Teacher>teclist;
			 extern Teacher globaltec;
			 long rid=long::Parse(textBox4->Text);
			 for(teclist.moveToStart();teclist.currPos()<teclist.length();teclist.next())
			 {
				 if(teclist.getValue().gettecid()==rid)
				 {
					 globaltec=Teacher(teclist.getValue());
					 break;
				 }
			 }
			 teclist.reset(globaltec);
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Student>stulist;
			 extern Student globalstu;
			 long rid=long::Parse(textBox1->Text);
			 for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
			 {
				 if(stulist.getValue().getstuid()==rid)
				 {
					 globalstu=Student(stulist.getValue());
					 break;
				 }
			 }
			 stulist.reset(globalstu);
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 globalstu.setsearch(false);
			 extern LList<Student>stulist;
			stulist.reset(globalstu);
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 globaltec.setsearch(false);
			 extern LList<Teacher>teclist;
			 teclist.reset(globaltec);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 globaltec.setsearch(true);
			 extern LList<Teacher>teclist;
			 teclist.reset(globaltec);
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 globaltec.setreport(false);
			 extern LList<Teacher>teclist;
			 teclist.reset(globaltec);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Teacher globaltec;
			 globaltec.setreport(true);
			 extern LList<Teacher>teclist;
			 teclist.reset(globaltec);
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 globalstu.setsearch(true);
			 extern LList<Student>stulist;
			 stulist.reset(globalstu);
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 globalstu.setreport(false);
			 extern LList<Student>stulist;
			 stulist.reset(globalstu);
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Student globalstu;
			 globalstu.setreport(true);
			 extern LList<Student>stulist;
			 stulist.reset(globalstu);
		 }
};
}
