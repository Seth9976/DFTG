// 函数名称: sub_45b4c0
// 虚拟地址: 0x45b4c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45b4c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    
    if (*arg1 != 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "tile.type == ROLLGFX_TILE", 
            "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x2525, "MaxGoods")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t ecx = arg1[0xe]
    
    if (ecx != 0 && ecx != 2)
        void* eax_1 = arg1[0xc]
        bool cond:0_1
        
        if (ecx != 3)
            cond:0_1 = ecx != 4
        else
            cond:0_1 = *eax_1 != 1
        
        if (cond:0_1)
            int32_t eax_4 = *(eax_1 + 0x30)
            
            if (eax_4 != 1 && eax_4 != 0)
            label_45b505:
                void* eax_5 = sub_452b90(arg1[0xf])
                int32_t ecx_4
                ecx_4.b = sub_453300(eax_5, 4, eax_5, 0x40, nullptr) != 0
                return ecx_4 + 1
        else
            int32_t eax_2 = *(eax_1 + 0x18)
            
            if (eax_2 != 1 && eax_2 != 0)
                goto label_45b505
    
    return 0
}
