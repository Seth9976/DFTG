// 函数名称: @__security_check_cookie@4
// 虚拟地址: 0x577333
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcall@__security_check_cookie@4(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != __security_cookie)
    if (arg1 != __security_cookie)
        noreturn ___report_gsfailure() __tailcall
}
