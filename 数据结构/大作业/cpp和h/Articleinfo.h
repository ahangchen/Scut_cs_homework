#pragma once

namespace 毕业设计管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Articleinfo 摘要
	/// </summary>
	public ref class Articleinfo : public System::Windows::Forms::Form
	{
	public:
		Articleinfo(void)
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
		~Articleinfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected: 
	private: System::Windows::Forms::Label^  ltec;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lstu;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lschool;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lgrade;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lid;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lartname;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label6;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lkeyword;
	private: System::Windows::Forms::Label^  lmark;
	private: System::Windows::Forms::Button^  button3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Articleinfo::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lmark = (gcnew System::Windows::Forms::Label());
			this->ltec = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lstu = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lschool = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lgrade = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lid = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lartname = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lkeyword = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->Controls->Add(this->lmark, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->ltec, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label9, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->lstu, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label7, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->lschool, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->lgrade, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->lid, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label12, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->lartname, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label13, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->lkeyword, 1, 7);
			this->tableLayoutPanel1->Location = System::Drawing::Point(21, 54);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 8;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.35135F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.64865F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 19)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 22)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 21)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(200, 191);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// lmark
			// 
			this->lmark->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lmark->AutoSize = true;
			this->lmark->Location = System::Drawing::Point(143, 144);
			this->lmark->Name = L"lmark";
			this->lmark->Size = System::Drawing::Size(11, 12);
			this->lmark->TabIndex = 16;
			this->lmark->Text = L"-";
			// 
			// ltec
			// 
			this->ltec->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ltec->AutoSize = true;
			this->ltec->Location = System::Drawing::Point(143, 92);
			this->ltec->Name = L"ltec";
			this->ltec->Size = System::Drawing::Size(11, 12);
			this->ltec->TabIndex = 9;
			this->ltec->Text = L"-";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(24, 92);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 12);
			this->label9->TabIndex = 8;
			this->label9->Text = L"指导老师";
			// 
			// lstu
			// 
			this->lstu->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lstu->AutoSize = true;
			this->lstu->Location = System::Drawing::Point(143, 68);
			this->lstu->Name = L"lstu";
			this->lstu->Size = System::Drawing::Size(11, 12);
			this->lstu->TabIndex = 7;
			this->lstu->Text = L"-";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 6;
			this->label7->Text = L"学生";
			// 
			// lschool
			// 
			this->lschool->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lschool->AutoSize = true;
			this->lschool->Location = System::Drawing::Point(143, 46);
			this->lschool->Name = L"lschool";
			this->lschool->Size = System::Drawing::Size(11, 12);
			this->lschool->TabIndex = 5;
			this->lschool->Text = L"-";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 46);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 12);
			this->label5->TabIndex = 4;
			this->label5->Text = L"专业";
			// 
			// lgrade
			// 
			this->lgrade->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lgrade->AutoSize = true;
			this->lgrade->Location = System::Drawing::Point(143, 25);
			this->lgrade->Name = L"lgrade";
			this->lgrade->Size = System::Drawing::Size(11, 12);
			this->lgrade->TabIndex = 3;
			this->lgrade->Text = L"-";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 12);
			this->label3->TabIndex = 2;
			this->label3->Text = L"年级";
			// 
			// lid
			// 
			this->lid->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lid->AutoSize = true;
			this->lid->Location = System::Drawing::Point(143, 5);
			this->lid->Name = L"lid";
			this->lid->Size = System::Drawing::Size(11, 12);
			this->lid->TabIndex = 1;
			this->lid->Text = L"-";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 0;
			this->label1->Text = L"索引号";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(30, 116);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 12);
			this->label12->TabIndex = 11;
			this->label12->Text = L"论文名";
			// 
			// lartname
			// 
			this->lartname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lartname->AutoSize = true;
			this->lartname->Location = System::Drawing::Point(143, 116);
			this->lartname->Name = L"lartname";
			this->lartname->Size = System::Drawing::Size(11, 12);
			this->lartname->TabIndex = 10;
			this->lartname->Text = L"-";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(36, 144);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 12);
			this->label13->TabIndex = 12;
			this->label13->Text = L"分数";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(30, 171);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 12);
			this->label8->TabIndex = 14;
			this->label8->Text = L"关键字";
			// 
			// lkeyword
			// 
			this->lkeyword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lkeyword->AutoSize = true;
			this->lkeyword->Location = System::Drawing::Point(143, 171);
			this->lkeyword->Name = L"lkeyword";
			this->lkeyword->Size = System::Drawing::Size(11, 12);
			this->lkeyword->TabIndex = 15;
			this->lkeyword->Text = L"-";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 12);
			this->label2->TabIndex = 1;
			this->label2->Text = L"教师评语";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(252, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 12);
			this->label4->TabIndex = 2;
			this->label4->Text = L"摘要";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(24, 281);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 195);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(254, 97);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(294, 379);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(473, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"收藏";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Articleinfo::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(473, 41);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"举报";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Articleinfo::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 45);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(280, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(164, 25);
			this->label6->TabIndex = 23;
			this->label6->Text = L"学生论文详细信息";
			
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 70);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 24;
			this->button3->Text = L"删除";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Articleinfo::button3_Click);
			// 
			// Articleinfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 489);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"Articleinfo";
			this->Text = L"Articleinfo";
			this->Load += gcnew System::EventHandler(this, &Articleinfo::Articleinfo_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Articleinfo_Load(System::Object^  sender, System::EventArgs^  e) {
				 extern Article globalart;
				 lid->Text=globalart.getartid().ToString();
				 lgrade->Text=globalart.getstugrade().ToString();
				 lschool->Text=gcnew String(globalart.getstusubject());
				 lstu->Text=gcnew String(globalart.getstuname());
				 ltec->Text=gcnew String(globalart.gettecname());
				 lartname->Text=gcnew String(globalart.getartname());
				 lmark->Text=(globalart.getmark()).ToString();
				 lkeyword->Text=gcnew String(globalart.getkeyword());
				 extern int usertype;
				 extern Student globalstu;
				 extern Teacher globaltec;

				 switch(usertype)
				 {
				 case 0:
					 {
						button1->Visible=false;
						button2->Visible=false;
						button3->Visible=false;
						break;
					}
				 case 1:
					 {
						 button1->Visible=true;
						 if (globalstu.canreport())
						 {
							 button2->Visible=true;
						 } 
						 else
						 {
							 button2->Visible=false;
						 }
						 button3->Visible=false;
						 break;
					 }
				 case 2:
					 {
						 button1->Visible=false;
						 if (globaltec.canreport())
						 {
							 button2->Visible=true;
						 } 
						 else
						 {
							 button2->Visible=false;
						 }
						 
						 button3->Visible=false;
						 break;
					}
				 case 3:
					 {
						 button1->Visible=false;
						 button2->Visible=false;
						 button3->Visible=true;
						 break;
					 }
				 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			extern Student globalstu;
			extern Article globalart;
			extern LList<Student>stulist;
			Record rcd=Record();
			rcd.setrecord(globalart.getartid(),globalstu.getstuid());
			rcd.setendmark(0);
			rcd.setexsitmark(1);
			globalstu.addcollection(rcd);
			stulist.reset(globalstu);
			
			/*for(stulist.moveToStart();stulist.currPos()<stulist.length();stulist.next())
			{
				MessageBox::Show(gcnew String(stulist.getValue().getname()));
				for (int i=0;i<globalstu.getcolnum();i++)
				{
					MessageBox::Show(globalstu.getcollection(a)[i].getartid().ToString());
				}
			}*/
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern Article globalart;
			 extern LList<Article>artlist;
			 artlist.remove(globalart);
			 MessageBox::Show("删除成功！");
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Record>replist;
			 extern Student globalstu;
			 extern Article globalart;
			 Record rcd1=Record();
			 rcd1.setendmark(0);
			 rcd1.setexsitmark(1);
			 rcd1.setrecord(globalart.getartid(),globalstu.getstuid());
			 extern Teacher globaltec;
			 extern Article globalart;
			 Record rcd2=Record();
			 rcd2.setendmark(0);
			 rcd2.setexsitmark(1);
			 rcd2.setrecord(globalart.getartid(),globaltec.gettecid());
			 extern int usertype;
			 if (usertype==1)
			 {
				 replist.append(rcd1);
			 } 
			 else
			 {
				 replist.append(rcd2);
			 }
			 for (replist.moveToStart();replist.currPos()<replist.length();replist.next())
			 {
				 MessageBox::Show(replist.getValue().getartid().ToString());
			 }
			 MessageBox::Show("举报成功");
		 }
};
}
