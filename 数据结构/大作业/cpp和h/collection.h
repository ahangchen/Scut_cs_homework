#pragma once

namespace 毕业设计管理系统 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// collection 摘要
	/// </summary>
	public ref class collection : public System::Windows::Forms::Form
	{
	public:
		collection(void)
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
		~collection()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  lstuname;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::ListView^  listView1;
private: System::Windows::Forms::ColumnHeader^  columnHeader1;
private: System::Windows::Forms::ColumnHeader^  columnHeader2;
private: System::Windows::Forms::ColumnHeader^  columnHeader3;
private: System::Windows::Forms::ColumnHeader^  columnHeader4;
private: System::Windows::Forms::ColumnHeader^  columnHeader5;
private: System::Windows::Forms::ColumnHeader^  columnHeader6;
private: System::Windows::Forms::ColumnHeader^  columnHeader7;
















private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(collection::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->lstuname = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 45);
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->lstuname);
			this->flowLayoutPanel1->Controls->Add(this->label74);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel1->Location = System::Drawing::Point(304, 14);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(472, 27);
			this->flowLayoutPanel1->TabIndex = 23;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(394, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"退出";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &collection::button6_Click);
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
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {this->columnHeader1, this->columnHeader2, 
				this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7});
			this->listView1->Location = System::Drawing::Point(295, 77);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(481, 272);
			this->listView1->TabIndex = 24;
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
			this->columnHeader3->Width = 86;
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(49, 296);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 21);
			this->textBox6->TabIndex = 41;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(166, 296);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 21);
			this->button2->TabIndex = 42;
			this->button2->Text = L"查看详情";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &collection::button2_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(24, 281);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 12);
			this->label6->TabIndex = 43;
			this->label6->Text = L"输入文章索引号";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(26, 77);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 44;
			// 
			// collection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(788, 359);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"collection";
			this->Text = L"collection";
			this->Load += gcnew System::EventHandler(this, &collection::collection_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void collection_Load(System::Object^  sender, System::EventArgs^  e) {
			 extern LList<Article>finalartresult;
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
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 extern Article globalart;
			 extern LList<Article>artlist;
			 extern int arcnum;
			 long artid=long::Parse(textBox6->Text);
			 for (artlist.moveToStart();artlist.currPos()<artlist.length();artlist.next())
			 {
				 if (artlist.getValue().getartid()==artid)
				 {
					 globalart=Article(artlist.getValue());
					 break;
				 }
			 }
			 Articleinfo^aif=gcnew Articleinfo();
			 aif->Show();
		 }
};
}
