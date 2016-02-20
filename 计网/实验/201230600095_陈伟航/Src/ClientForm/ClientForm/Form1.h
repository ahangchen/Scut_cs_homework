#pragma once
// socketTest.cpp : 定义控制台应用程序的入口点。
//
#include <winsock.h>
#pragma comment(lib,"ws2_32.lib")

#define  MAXBUFLEN 256
#define PORT 44965
#define DEST_IP_ADDR "125.216.247.122" //想要链接的目标Server address
WSADATA MyData;
SOCKADDR_IN destSockAddr;
SOCKET destSocket;
unsigned long destAddr;
int status;
namespace ClientForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(12, 126);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(426, 315);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(12, 20);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(324, 74);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SteelBlue;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(353, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 74);
			this->button1->TabIndex = 2;
			this->button1->Text = L"发送消息";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(13, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"消息记录";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tomato;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 464);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(426, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"退出";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(450, 515);
			this->ControlBox = false;
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"socket客户端";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int numsnt;
				 char *toSendtxt=new char[256];
				 toSendtxt=(char*)(Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();
				 numsnt=send(destSocket, toSendtxt, strlen(toSendtxt) + 1, 0);
				 if (numsnt != (int)strlen(toSendtxt) + 1)
				 {
					 MessageBox::Show( "Connection terminated");

					 status=closesocket(destSocket);
					 if (status == SOCKET_ERROR)
						 MessageBox::Show("ERROR: closesocket unsuccessful");
					 status=WSACleanup();
					 if (status == SOCKET_ERROR)
						 MessageBox::Show("ERROR: WSACleanup unsuccessful");
					 return;
				 }

				 /* Wait before sending the message again */
				 textBox1->Text+="我的消息：\r\n"+textBox2->Text+"\r\n";
				 textBox2->Text="";
				 button1->Text="等待服务器回应";
				 Form1::Update();
				 int numrcv;
				 char buff[MAXBUFLEN];
				 numrcv = recv(destSocket,buff,MAXBUFLEN,0);

				 if ((0==numrcv)||(numrcv==SOCKET_ERROR))
				 {
					 MessageBox::Show("链接受到限制");
					 button1->Text="发送消息";
					 status = closesocket(destSocket);
					 if (SOCKET_ERROR==status)
						 MessageBox::Show("断开链接失败");

					 status = WSACleanup();
					 if (SOCKET_ERROR==status)
						 MessageBox::Show("清理链接失败");
					 return;
				 }
				 textBox1->Text+="服务器消息："+gcnew String(buff)+"\r\n";
				 button1->Text="发送消息";
			 }
			
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 /* initialize the Windows Socket DLL */
				 status=WSAStartup(MAKEWORD(1, 1), &MyData);
				 if (status != 0)
					 MessageBox::Show("ERROR: WSAStartup unsuccessful") ;

				 /* convert IP address into in_addr form */
				 destAddr=inet_addr(DEST_IP_ADDR);
				 /* copy destAddr into sockaddr_in structure */
				 memcpy(&destSockAddr.sin_addr, &destAddr, sizeof(destAddr));
				 /* specify the port portion of the address */
				 destSockAddr.sin_port=htons(PORT);
				 /* specify the address family as Internet */
				 destSockAddr.sin_family=AF_INET;

				 /* create a socket */
				 destSocket=socket(AF_INET, SOCK_STREAM, 0);
				 if (destSocket == INVALID_SOCKET)
				 {
					 
					 MessageBox::Show("ERROR: socket unsuccessful") ;
					 status=WSACleanup();
					 if (status == SOCKET_ERROR)
						 MessageBox::Show("ERROR: WSACleanup unsuccessful") ; 
					 return;
				 }

				 textBox1->Text+="Trying to connect to IP Address: " + DEST_IP_ADDR +"\r\n";

				 /* connect to the server */
				 status=connect(destSocket, (LPSOCKADDR)&destSockAddr, sizeof(destSockAddr));
				 if (status == SOCKET_ERROR)
				 {
					 MessageBox::Show("ERROR: connect unsuccessful" );

					 status=closesocket(destSocket);
					 if (status == SOCKET_ERROR)
						 MessageBox::Show( "ERROR: closesocket unsuccessful");
					 status=WSACleanup();
					 if (status == SOCKET_ERROR)
						 MessageBox::Show("ERROR: WSACleanup unsuccessful");
					 return;
				 }

				  textBox1->Text+= "Connected...\r\n\r\n=============================\r\n";
			 }

private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 status=closesocket(destSocket);
			 if (status == SOCKET_ERROR)
				 MessageBox::Show( "ERROR: closesocket unsuccessful");
			 status=WSACleanup();
			 if (status == SOCKET_ERROR)
				 MessageBox::Show("ERROR: WSACleanup unsuccessful");
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form1::Close();
		 }
};
}

