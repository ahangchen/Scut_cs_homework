#pragma once

namespace 物资管理 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// form28 摘要
	/// </summary>
	public ref class form28 : public System::Windows::Forms::Form
	{
	public:
		form28(void)
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
		~form28()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form28::typeid));
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(792, 567);
			this->webBrowser1->TabIndex = 0;
			// 
			// form28
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 567);
			this->Controls->Add(this->webBrowser1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"form28";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"相关表格下载";
			this->Load += gcnew System::EventHandler(this, &form28::form28_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void form28_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 webBrowser1->Url=gcnew Uri("http://www2.scut.edu.cn/ssd/");
			 }
	};
}
