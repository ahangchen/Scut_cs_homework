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
	/// Form2 摘要
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

			
	protected: 

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  bt_exit;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel5;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;
	private: System::Windows::Forms::Label^  lname;
	private: System::Windows::Forms::Label^  labeltype;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->lname = (gcnew System::Windows::Forms::Label());
			this->labeltype = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->bt_exit = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				37.18906F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				62.81094F)));
			this->tableLayoutPanel1->Controls->Add(this->panel1, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel5, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->panel2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 16);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.635098F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 91.36491F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 8)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(815, 384);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(4, 37);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(286, 330);
			this->panel1->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"", L"计算机科学与技术", L"计算机软件", L"网络工程", L"信息安全", L"计算机双语联合班", 
				L"计算机全英创新班"});
			this->comboBox1->Location = System::Drawing::Point(79, 110);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 20);
			this->comboBox1->TabIndex = 63;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 266);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 12);
			this->label6->TabIndex = 62;
			this->label6->Text = L"输入文章索引号";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(167, 281);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 21);
			this->button2->TabIndex = 61;
			this->button2->Text = L"查看详情";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(50, 281);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 21);
			this->textBox6->TabIndex = 60;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(91, 214);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 59;
			this->button11->Text = L"组合搜索";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(195, 174);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 58;
			this->button10->Text = L"师名搜索";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form2::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(195, 140);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 57;
			this->button9->Text = L"分数搜索";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form2::button9_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(195, 106);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 55;
			this->button7->Text = L"专业搜索";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form2::button7_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(195, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 54;
			this->button1->Text = L"文名搜索";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(79, 174);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 21);
			this->textBox5->TabIndex = 53;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(79, 143);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 21);
			this->textBox4->TabIndex = 52;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 21);
			this->textBox1->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 12);
			this->label5->TabIndex = 48;
			this->label5->Text = L"教师名";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 12);
			this->label4->TabIndex = 47;
			this->label4->Text = L"论文分数";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 45;
			this->label1->Text = L"专业";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 12);
			this->label7->TabIndex = 44;
			this->label7->Text = L"论文名";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 45);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Location = System::Drawing::Point(4, 4);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(258, 26);
			this->flowLayoutPanel5->TabIndex = 4;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->flowLayoutPanel4);
			this->panel2->Controls->Add(this->listView1);
			this->panel2->Location = System::Drawing::Point(306, 37);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(505, 330);
			this->panel2->TabIndex = 5;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add(this->lname);
			this->flowLayoutPanel4->Controls->Add(this->labeltype);
			this->flowLayoutPanel4->Controls->Add(this->label74);
			this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel4->Location = System::Drawing::Point(47, 9);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(440, 21);
			this->flowLayoutPanel4->TabIndex = 0;
			// 
			// lname
			// 
			this->lname->AutoSize = true;
			this->lname->Location = System::Drawing::Point(408, 0);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(29, 12);
			this->lname->TabIndex = 2;
			this->lname->Text = L"name";
			// 
			// labeltype
			// 
			this->labeltype->AutoSize = true;
			this->labeltype->Location = System::Drawing::Point(373, 0);
			this->labeltype->Name = L"labeltype";
			this->labeltype->Size = System::Drawing::Size(29, 12);
			this->labeltype->TabIndex = 1;
			this->labeltype->Text = L"游客";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(314, 0);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(53, 12);
			this->label74->TabIndex = 0;
			this->label74->Text = L"欢迎您！";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7});
			this->listView1->Location = System::Drawing::Point(8, 33);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(479, 294);
			this->listView1->TabIndex = 25;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"索引号";
			this->columnHeader1->Width = 77;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"年级";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"专业";
			this->columnHeader3->Width = 104;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"作者";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"指导老师";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"论文名";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"分数";
			this->columnHeader7->Width = 67;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->bt_exit);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(306, 4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(505, 26);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// bt_exit
			// 
			this->bt_exit->Location = System::Drawing::Point(427, 3);
			this->bt_exit->Name = L"bt_exit";
			this->bt_exit->Size = System::Drawing::Size(75, 23);
			this->bt_exit->TabIndex = 0;
			this->bt_exit->Text = L"退出";
			this->bt_exit->UseVisualStyleBackColor = true;
			this->bt_exit->Click += gcnew System::EventHandler(this, &Form2::bt_exit_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 411);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel4->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
				 
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

				 extern int stunum;//学生总数
				 extern int tecnum;//教师总数
				 extern int arcnum;//文章总数
				 extern LList<Student>stulist;
				 extern LList<Teacher>teclist;
				 extern LList<Manager>manlist;
				 extern LList<Record>replist;
				 extern LList<Article>artlist;
				 extern LList<Article>artfromsj[6];//既是按专业建立的索引源，其中的每项也是专业查找的结果
				 extern LList<Student>stuidindex[10];//学生ID索引源，索引结果是单个记录
				 extern LList<Article>artidindex[10];//文章ID索引源，索引结果是单个记录
				 extern LList<Article>artmarkindex[5];//文章分数索引源
				 extern LList<Article>artfrommark;//文章分数查找结果
				 extern LList<Article>artfromname;//教师姓名查找结果
				 extern LList<Article>finalartresult;
				 finalartresult.clear();
				 //按专业对文章分类
				 for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
				 {

					/* 计算机科学与技术
						 计算机软件
						 网络工程
						 信息安全
						 计算机双语联合班
						 计算机全英创新班*/
					 if (!strcmp(artlist.getValue().getstusubject(),"计算机科学与技术"))
					 {
						 artfromsj[0].insert(artlist.getValue());
					 }
					 else if (!strcmp(artlist.getValue().getstusubject(),"计算机软件"))
					 {
						 artfromsj[1].insert(artlist.getValue());
					 }
					 else if (!strcmp(artlist.getValue().getstusubject(),"网络工程"))
					 {
						 artfromsj[2].insert(artlist.getValue());
					 }
					 else if (!strcmp(artlist.getValue().getstusubject(),"信息安全"))
					 {
						 artfromsj[3].insert(artlist.getValue());
					 }
					 else if  (!strcmp(artlist.getValue().getstusubject(),"计算机双语联合班"))
					 {
						 artfromsj[4].insert(artlist.getValue());
					 }
					 else
					 {
						 artfromsj[5].insert(artlist.getValue());
					 }
				 }
				 //按学生ID建立线性索引
				 int stumodel=stunum/10+1;
				 int i1=0;
				 for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next(),i1++)
				 {
					 stuidindex[i1/stumodel].insert(Student(stulist.getValue()));
				 }
				 //按文章ID建立线性索引
				 int artmodel=arcnum/10+1;
				 int i2=0;
				 for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next(),i2++)
				 {
					 artidindex[i2/artmodel].insert(artlist.getValue());
				 }
				 //按照文章分数建立线性索引
				 for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
				 {
					// int a=artlist.getValue().getmark();
					if (artlist.getValue().getmark()<60)
					{
						artmarkindex[0].insert(artlist.getValue());
					}
					else if (artlist.getValue().getmark()>89)
					{
						artmarkindex[4].insert(artlist.getValue());
					}
					else if (artlist.getValue().getmark()>=60&&artlist.getValue().getmark()<70)
					{
						artmarkindex[1].insert(artlist.getValue());
					}
					else if (artlist.getValue().getmark()>=70&&artlist.getValue().getmark()<80)
					{
						artmarkindex[2].insert(artlist.getValue());
					}
					else if (artlist.getValue().getmark()>=80&&artlist.getValue().getmark()<90)
					{
						artmarkindex[3].insert(artlist.getValue());
					}
				 }
				 //
			 }
	private: System::Void bt_exit_Click(System::Object^  sender, System::EventArgs^  e) {
				  Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Article globalart;
			 extern LList<Article>artlist;
			 extern LList<Article>artidindex[10];
			 extern int arcnum;
			  int artmodel=arcnum/10+1;
			 long artid=long::Parse(textBox6->Text);
			 for (artidindex[artid/artmodel].moveToStart();artidindex[artid/artmodel].currPos()<artlist.length();artidindex[artid/artmodel].next())
			 {
				 if (artidindex[artid/artmodel].getValue().getartid()==artid)
				 {
					 globalart=Article(artidindex[artid/artmodel].getValue());
					 break;
				 }
			 }
			 Articleinfo^aif=gcnew Articleinfo();
			 aif->Show();
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article>artlist;	
			 extern LList<Article>artfromname;//教师姓名查找结果
			 extern LList<Article>finalartresult;
			  finalartresult.clear();
			  listView1->Items->Clear();
			  artfromname.clear();
			// artfromname.clear();
			 char*tecname=(char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer();
			 for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
			 {
				 if (strcontain(artlist.getValue().gettecname(),tecname))
				 {
					 artfromname.insert(artlist.getValue());
				 }
			 }

			 //listview
			 array<String^>^aidlist=gcnew array<String^>(artfromname.length());
			 array<String^>^gradelist=gcnew array<String^>(artfromname.length());
			 array<String^>^sjlist=gcnew array<String^>(artfromname.length());
			 array<String^>^snamelist=gcnew array<String^>(artfromname.length());
			 array<String^>^tnamelist=gcnew array<String^>(artfromname.length());
			 array<String^>^anamelist=gcnew array<String^>(artfromname.length());
			 array<String^>^amarklist=gcnew array<String^>(artfromname.length());
			 for (int i=0;i<artfromname.length();i++,artfromname.next())
			 {
				 
				 aidlist[i]=artfromname.getValue().getartid().ToString();
				 gradelist[i]=artfromname.getValue().getstugrade().ToString();
				 sjlist[i]=gcnew String(artfromname.getValue().getstusubject());
				 snamelist[i]=gcnew String(artfromname.getValue().getstuname());
				 tnamelist[i]=gcnew String(artfromname.getValue().gettecname());
				 anamelist[i]=gcnew String(artfromname.getValue().getartname());
				 amarklist[i]=artfromname.getValue().getmark().ToString();
			 }
			 for (int i=0;i<artfromname.length();i++)
			 {
				 ListViewItem^listItem=gcnew ListViewItem(aidlist[i]);
				 listItem->SubItems->Add(gradelist[i]);
				 listItem->SubItems->Add(sjlist[i]);
				 listItem->SubItems->Add(snamelist[i]);
				 listItem->SubItems->Add(tnamelist[i]);
				 listItem->SubItems->Add(anamelist[i]);
				 listItem->SubItems->Add(amarklist[i]);
				 listView1->Items->Add(listItem);
			 }	
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article>artlist;	
			 extern LList<Article>finalartresult;
			 //finalartresult.clear();
			 listView1->Items->Clear();
			 finalartresult.clear();
			 char*searchartname=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
			 for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
			 {
				 if (strcontain(artlist.getValue().getartname(),searchartname))
				 {
					 finalartresult.insert(artlist.getValue());
				 }
			 }

			 //listview
			 array<String^>^aidlist=gcnew array<String^>(finalartresult.length());
			 array<String^>^gradelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^sjlist=gcnew array<String^>(finalartresult.length());
			 array<String^>^snamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^tnamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^anamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^amarklist=gcnew array<String^>(finalartresult.length());
			 for (int i=0;i<finalartresult.length();i++,finalartresult.next())
			 {

				 aidlist[i]=finalartresult.getValue().getartid().ToString();
				 gradelist[i]=finalartresult.getValue().getstugrade().ToString();
				 sjlist[i]=gcnew String(finalartresult.getValue().getstusubject());
				 snamelist[i]=gcnew String(finalartresult.getValue().getstuname());
				 tnamelist[i]=gcnew String(finalartresult.getValue().gettecname());
				 anamelist[i]=gcnew String(finalartresult.getValue().getartname());
				 amarklist[i]=finalartresult.getValue().getmark().ToString();
			 }
			 for (int i=0;i<finalartresult.length();i++)
			 {
				 ListViewItem^listItem=gcnew ListViewItem(aidlist[i]);
				 listItem->SubItems->Add(gradelist[i]);
				 listItem->SubItems->Add(sjlist[i]);
				 listItem->SubItems->Add(snamelist[i]);
				 listItem->SubItems->Add(tnamelist[i]);
				 listItem->SubItems->Add(anamelist[i]);
				 listItem->SubItems->Add(amarklist[i]);
				 listView1->Items->Add(listItem);
			 }
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 char*sj=(char*)(Marshal::StringToHGlobalAnsi(comboBox1->Text)).ToPointer();
			 extern LList<Article>artfromsj[6];//既是按专业建立的索引源，其中的每项也是专业查找的结果
			  listView1->Items->Clear();
			 int ii;
			 if (!strcmp(sj,""))
			 {
				 MessageBox::Show("请选择专业！");
			 } 
			 else
			 {
				 if (!strcmp(sj,"计算机科学与技术"))
				 {
					 ii=0;
				 }
				 else if (!strcmp(sj,"计算机软件"))
				 {
					 ii=1;
				 }
				 else if (!strcmp(sj,"网络工程"))
				 {
					 ii=2;
				 }
				 else if (!strcmp(sj,"信息安全"))
				 {
					 ii=3;
				 }
				 else if  (!strcmp(sj,"计算机双语联合班"))
				 {
					 ii=4;
				 }
				 else 
				 {
					 ii=5;
				 }
				 //listview
				 array<String^>^aidlist=gcnew array<String^>(artfromsj[ii].length());
				 array<String^>^gradelist=gcnew array<String^>(artfromsj[ii].length());
				 array<String^>^sjlist=gcnew array<String^>(artfromsj[ii].length());
				 array<String^>^snamelist=gcnew array<String^>(artfromsj[ii].length());
				 array<String^>^tnamelist=gcnew array<String^>(artfromsj[ii].length());
				 array<String^>^anamelist=gcnew array<String^>(artfromsj[ii].length());
				 array<String^>^amarklist=gcnew array<String^>(artfromsj[ii].length());
				 for (int i=0;i<artfromsj[ii].length();i++,artfromsj[ii].next())
				 {

					 aidlist[i]=artfromsj[ii].getValue().getartid().ToString();
					 gradelist[i]=artfromsj[ii].getValue().getstugrade().ToString();
					 sjlist[i]=gcnew String(artfromsj[ii].getValue().getstusubject());
					 snamelist[i]=gcnew String(artfromsj[ii].getValue().getstuname());
					 tnamelist[i]=gcnew String(artfromsj[ii].getValue().gettecname());
					 anamelist[i]=gcnew String(artfromsj[ii].getValue().getartname());
					 amarklist[i]=artfromsj[ii].getValue().getmark().ToString();
				 }
				 for (int i=0;i<artfromsj[ii].length();i++)
				 {
					 ListViewItem^listItem=gcnew ListViewItem(aidlist[i]);
					 listItem->SubItems->Add(gradelist[i]);
					 listItem->SubItems->Add(sjlist[i]);
					 listItem->SubItems->Add(snamelist[i]);
					 listItem->SubItems->Add(tnamelist[i]);
					 listItem->SubItems->Add(anamelist[i]);
					 listItem->SubItems->Add(amarklist[i]);
					 listView1->Items->Add(listItem);
				 }
			 }
			 
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article>finalartresult;
			  finalartresult.clear();
			   listView1->Items->Clear();
			 extern LList<Article>artmarkindex[5];
			 int artmark=int::Parse(textBox4->Text);
			 int ii=0;
			 if (artmark<60)
			 {
				 ii=0;
			 }
			 else if (artmark>59&&artmark<70)
			 {
				 ii=1;
			 } 
			 else if(artmark>69&&artmark<80)
			 {
				 ii=2;
			 }
			 else if (artmark>79&&artmark<90)
			 {
				 ii=3;
			 }
			 else
			 {
				 ii=4;
			 }
			 int l=artmarkindex[ii].length();
			 for(artmarkindex[ii].moveToStart();artmarkindex[ii].currPos()<artmarkindex[ii].length();artmarkindex[ii].next())
			 {
				 int a=artmarkindex[ii].getValue().getmark();//
				 if (artmarkindex[ii].getValue().getmark()==artmark)
				 {
					 finalartresult.insert(artmarkindex[ii].getValue());
				 }
			 }
			 //listview
			 array<String^>^aidlist=gcnew array<String^>(finalartresult.length());
			 array<String^>^gradelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^sjlist=gcnew array<String^>(finalartresult.length());
			 array<String^>^snamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^tnamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^anamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^amarklist=gcnew array<String^>(finalartresult.length());
			 for (int i=0;i<finalartresult.length();i++,finalartresult.next())
			 {

				 aidlist[i]=finalartresult.getValue().getartid().ToString();
				 gradelist[i]=finalartresult.getValue().getstugrade().ToString();
				 sjlist[i]=gcnew String(finalartresult.getValue().getstusubject());
				 snamelist[i]=gcnew String(finalartresult.getValue().getstuname());
				 tnamelist[i]=gcnew String(finalartresult.getValue().gettecname());
				 anamelist[i]=gcnew String(finalartresult.getValue().getartname());
				 amarklist[i]=finalartresult.getValue().getmark().ToString();
			 }
			 for (int i=0;i<finalartresult.length();i++)
			 {
				 ListViewItem^listItem=gcnew ListViewItem(aidlist[i]);
				 listItem->SubItems->Add(gradelist[i]);
				 listItem->SubItems->Add(sjlist[i]);
				 listItem->SubItems->Add(snamelist[i]);
				 listItem->SubItems->Add(tnamelist[i]);
				 listItem->SubItems->Add(anamelist[i]);
				 listItem->SubItems->Add(amarklist[i]);
				 listView1->Items->Add(listItem);
			 }
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article>artlist;	
			 extern LList<Article>finalartresult;
			  extern LList<Article>artfromname;//教师姓名查找结果
			  extern LList<Article>artfromsj[6];//既是按专业建立的索引源，其中的每项也是专业查找的结果
			   extern LList<Article>artmarkindex[5];
			    finalartresult.clear();
				 int a=finalartresult.length();//
				 listView1->Items->Clear();
			   int ii=0;
			 if (comboBox1->Text!="")
			 {
				 if (textBox4->Text!="")
				 {
					 //比较四大项
					 int artmark=int::Parse(textBox4->Text);
					//按分数划分 
					 if (artmark<60)
					 {
						 ii=0;
					 }
					 else if (artmark>59&&artmark<70)
					 {
						 ii=1;
					 } 
					 else if(artmark>69&&artmark<80)
					 {
						 ii=2;
					 }
					 else if (artmark>79&&artmark<90)
					 {
						 ii=3;
					 }
					 else
					 {
						 ii=4;
					 }
					 //在不同分数段中查找
					 for(artmarkindex[ii].moveToStart();artmarkindex[ii].currPos()<artmarkindex[ii].length();artmarkindex[ii].next())
					 {
						 if (artmarkindex[ii].getValue().getmark()==artmark)
						 {
							 finalartresult.insert(artmarkindex[ii].getValue());
						 }
					 }
					 a=finalartresult.length();//
					 //根据科目筛选
					   char*sj=(char*)(Marshal::StringToHGlobalAnsi(comboBox1->Text)).ToPointer();
					 for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
					 {
						char s[50];
						strcpy_s(s,finalartresult.getValue().getstusubject());
						 if (strcmp(finalartresult.getValue().getstusubject(),sj))
						 {
							 finalartresult.remove();
							 finalartresult.prev();
						 }
					 }
					a=finalartresult.length();//
					 if (textBox1->Text!="")
					 {
						 //根据文章名筛选
						 char*searchartname=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
						 for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						 {
							 if (!strcontain(finalartresult.getValue().getartname(),searchartname))
							 {
								 finalartresult.remove();
								 finalartresult.prev();
							 }
						 }
						a=finalartresult.length();//
					 }

					 if (textBox5->Text!="")
					 {
						 //根据教师名筛选
						 char*tecname=(char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer();
						 for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						 {
							 if (!strcontain(finalartresult.getValue().gettecname(),tecname))
							 {
								 finalartresult.remove();
								 finalartresult.prev();
							 }
						 } 		
						a=finalartresult.length();//
					 }					 
				 } 
				 else
				 {
					//比较三项（除分数）
					 char*sj=(char*)(Marshal::StringToHGlobalAnsi(comboBox1->Text)).ToPointer();
					 if (!strcmp(sj,"计算机科学与技术"))
					 {
						 ii=0;
					 }
					 else if (!strcmp(sj,"计算机软件"))
					 {
						 ii=1;
					 }
					 else if (!strcmp(sj,"网络工程"))
					 {
						 ii=2;
					 }
					 else if (!strcmp(sj,"信息安全"))
					 {
						 ii=3;
					 }
					 else if  (!strcmp(sj,"计算机双语联合班"))
					 {
						 ii=4;
					 }
					 else 
					 {
						 ii=5;
					 }
					 //将该科目添加到查找列表中
					for (artfromsj[ii].moveToStart();artfromsj[ii].currPos()<artfromsj[ii].length();artfromsj[ii].next())
					{
						finalartresult.insert(artfromsj[ii].getValue());
					}
					a=finalartresult.length();//
					//根据文章名筛选
					 if (textBox1->Text!="")
					 {
						 char*searchartname=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
						 for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						 {
							 if (!strcontain(finalartresult.getValue().getartname(),searchartname))
							 {
								 finalartresult.remove();
								 finalartresult.prev();
							 }
						 }
					 }				
					 a=finalartresult.length();//
					 //根据教师名筛选
					  if (textBox5->Text!="")
					  {
						char*tecname=(char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer();
						 for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						 {
							 if (!strcontain(finalartresult.getValue().gettecname(),tecname))
							 {
								 finalartresult.remove();
								 finalartresult.prev();
							 }
						 }
						a=finalartresult.length();//
					  }
					 
			 }
			 }
			 else
			 {
				 if (textBox4->Text!="")
				 {
					 //比较三项（除科目）
					 int artmark=int::Parse(textBox4->Text);
					 int ii=0;
					 if (artmark<60)
					 {
						 ii=0;
					 }
					 else if (artmark>59&&artmark<70)
					 {
						 ii=1;
					 } 
					 else if(artmark>69&&artmark<80)
					 {
						 ii=2;
					 }
					 else if (artmark>79&&artmark<90)
					 {
						 ii=3;
					 }
					 else
					 {
						 ii=4;
					 }
					 //按分数筛选
					 for(artmarkindex[ii].moveToStart();artmarkindex[ii].currPos()<artmarkindex[ii].length();artmarkindex[ii].next())
					 {
						 if (artmarkindex[ii].getValue().getmark()==artmark)
						 {
							 finalartresult.insert(artmarkindex[ii].getValue());
						 }
					 }
					 a=finalartresult.length();//
					 //按文章名筛选
					  if (textBox1->Text!="")
					  {
						  char*searchartname=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
						  for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						  {
							  if (!strcontain(finalartresult.getValue().getartname(),searchartname))
							  {
								  finalartresult.remove();
								  finalartresult.prev();
							  }
						  }
						  a=finalartresult.length();//
					  }
					 
					 //按教师名筛选
					   if (textBox5->Text!="")
					   {
						   char*tecname=(char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer();
						   for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						   {
							   if (!strcontain(finalartresult.getValue().gettecname(),tecname))
							   {
								   finalartresult.remove();
								   finalartresult.prev();
							   }
						   }
						   a=finalartresult.length();//
					   }
					 
				 } 
				 else
				 {
					//比较两项（除科目与分数）
					
					 //finalartresult.clear();
					 char*searchartname=(char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
					 for(artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
					 {
						 if (strcontain(artlist.getValue().getartname(),searchartname))
						 {
							 finalartresult.insert(artlist.getValue());
						 }
					 }
					 a=finalartresult.length();//
					   if (textBox5->Text!="")
					   {
						   char*tecname=(char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer();
						   for(finalartresult.moveToStart();finalartresult.currPos()<finalartresult.length();finalartresult.next())
						   {
							   if (!strcontain(finalartresult.getValue().gettecname(),tecname))
							   {
								   finalartresult.remove();
								   finalartresult.prev();
							   }
						   }
						   a=finalartresult.length();//
					   }
					 
				 }
			 }
			 //listview
			 array<String^>^aidlist=gcnew array<String^>(finalartresult.length());
			 array<String^>^gradelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^sjlist=gcnew array<String^>(finalartresult.length());
			 array<String^>^snamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^tnamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^anamelist=gcnew array<String^>(finalartresult.length());
			 array<String^>^amarklist=gcnew array<String^>(finalartresult.length());
			 a=finalartresult.length();
			 finalartresult.moveToStart();
			 for (int i=0;i<finalartresult.length();i++,finalartresult.next())
			 {

				 aidlist[i]=finalartresult.getValue().getartid().ToString();
				 gradelist[i]=finalartresult.getValue().getstugrade().ToString();
				 sjlist[i]=gcnew String(finalartresult.getValue().getstusubject());
				 snamelist[i]=gcnew String(finalartresult.getValue().getstuname());
				 tnamelist[i]=gcnew String(finalartresult.getValue().gettecname());
				 anamelist[i]=gcnew String(finalartresult.getValue().getartname());
				 amarklist[i]=finalartresult.getValue().getmark().ToString();
			 }
			 for (int i=0;i<finalartresult.length();i++)
			 {
				 ListViewItem^listItem=gcnew ListViewItem(aidlist[i]);
				 listItem->SubItems->Add(gradelist[i]);
				 listItem->SubItems->Add(sjlist[i]);
				 listItem->SubItems->Add(snamelist[i]);
				 listItem->SubItems->Add(tnamelist[i]);
				 listItem->SubItems->Add(anamelist[i]);
				 listItem->SubItems->Add(amarklist[i]);
				 listView1->Items->Add(listItem);
			 }
		 }
};
}
