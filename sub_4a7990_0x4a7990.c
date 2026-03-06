// 函数名称: sub_4a7990
// 虚拟地址: 0x4a7990
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

HWNDsub_4a7990()
{
    // 第一条实际指令: HWND result
    HWND result
    
    if ((0x8000 & GetKeyState(0x12).w) != 0 && data_aca1f0->__offset(0x18).b != 0)
        result = GetFocus()
        
        if (result == data_1150b8c || result == 0)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
