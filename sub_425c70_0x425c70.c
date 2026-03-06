// 函数名称: sub_425c70
// 虚拟地址: 0x425c70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_425c70(int32_t arg1)
{
    // 第一条实际指令: int32_t var_4 = arg1
    int32_t var_4 = arg1
    void* eax = data_6cfe4c
    
    if (eax == 0)
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    for (int32_t* i = *(*(eax + 0xa48) + (((arg1 s>> 4 | arg1) & *(eax + 0xa4c)) << 2)); i != 0; 
            i = i[6])
        if (arg1 == *i)
            if (i == 0xfffffff8 || i[2] == 3)
                break
            
            int32_t ecx_5
            ecx_5.b = sub_425c10(&i[2]) s> 0xea60
            return ecx_5 + 1
    
    return 3
}
