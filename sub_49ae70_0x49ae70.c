// 函数名称: sub_49ae70
// 虚拟地址: 0x49ae70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_49ae70(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg1[1] != 0x22)
        int32_t eax
        sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_UI2", 
            "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x8ae, "UI2DefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax_1 = sub_4981f0(arg1)
    int32_t* ebx = eax_1
    int32_t i = 0
    
    if (ebx[2] s> 0)
        void* edi_1 = nullptr
        
        do
            eax_1 = __stricmp(sub_4f0df0(eax_1, edi_1 + *ebx, &data_6218dc, 0x64), arg2)
            
            if (eax_1 == 0)
                return *ebx + i * 0x18
            
            i += 1
            edi_1 += 0x18
        while (i s< ebx[2])
    
    return 0
}
