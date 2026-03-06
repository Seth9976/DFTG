// 函数名称: sub_510860
// 虚拟地址: 0x510860
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_510860(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_14_2
    int32_t var_14_2
    char* ecx_2
    
    if (arg1 u> 0xff)
        char const* const var_10_3 = "ToolDataMoveItem"
        var_14_2 = 0x95c
        ecx_2 = "sourceIndex >= 0 && sourceIndex < MAX_EMITTERS"
    else
        if (arg2 u<= 0xff)
            int32_t edi = *((arg1 << 3) + &data_11510c4)
            int32_t ebx = *((arg1 << 3) + &data_11510c8)
            
            if (arg1 s< arg2)
                sub_579a90((arg1 << 3) + &data_11510c4, (arg1 << 3) + &data_11510cc, (arg2 - arg1) << 3)
            else if (arg1 s> arg2)
                sub_579a90((arg2 << 3) + &data_11510cc, (arg2 << 3) + &data_11510c4, (arg1 - arg2) << 3)
            
            *((arg2 << 3) + &data_11510c4) = edi
            *((arg2 << 3) + &data_11510c8) = ebx
            return 
        
        char const* const var_10_2 = "ToolDataMoveItem"
        var_14_2 = 0x95d
        ecx_2 = "destIndex >= 0 && destIndex < MAX_EMITTERS"
    
    char* eax
    sub_489550(eax, &data_5b2591, ecx_2, "d:\ax\trunk\ax2017\engine\windows\editorwindow.cpp", 
        var_14_2, "ToolDataMoveItem")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
