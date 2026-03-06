// 函数名称: sub_4898f0
// 虚拟地址: 0x4898f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HINSTANCE __fastcallsub_4898f0(PSTR arg1)
{
    // 第一条实际指令: HINSTANCE result
    HINSTANCE result
    result.b = ShellExecuteA(nullptr, "open", arg1, nullptr, nullptr, SW_SHOWNORMAL) u>= 0x20
    return result
}
