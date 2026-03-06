// 函数名称: sub_454330
// 虚拟地址: 0x454330
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_454330(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    
    if (arg2 == 4 || arg2 == 5)
        int32_t result = sub_453010(arg1, arg2)
        
        if (result != 0)
            return sub_452cc0(result)
        
        return result
    
    int32_t eax
    sub_489550(eax, &data_5b2591, "where == TW_DEVELOPMENTS || where == TW_SETTLEMENTS", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x8f1, "GetTopTile")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
