// 函数名称: sub_4b9480
// 虚拟地址: 0x4b9480
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_4b9480()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_6c446c s> 0)
        int32_t* ebx_1 = &data_644680
        
        do
            int32_t* esi_1 = *ebx_1
            int32_t* eax
            
            if (esi_1[1] != 0)
                sub_489550(eax, &data_5b2591, "gUI2Editor.undoStack[i].def->pParseTree == NULL", 
                    "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x3cfd, "UI2EditorDispose")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if ((esi_1[2].b & 1) == 0)
                esi_1[3]
                sub_4cead0(*esi_1)
                char** ecx_2 = esi_1[1]
                *esi_1 = 0
                
                if (ecx_2 != 0)
                    sub_4d4bb0(ecx_2)
                    esi_1[1] = 0
            
            eax = _aligned_free_base(esi_1)
            i += 1
            ebx_1 = &ebx_1[0x407]
        while (i s< data_6c446c)
    
    bool cond:0 = data_642624 == 0
    data_6c4468 = 0
    data_6c446c = 0
    data_643654 = 0
    
    if (cond:0)
        return 
    
    data_642620 = 0
    sub_49a5a0(&data_642624)
    data_642624 = 0
}
