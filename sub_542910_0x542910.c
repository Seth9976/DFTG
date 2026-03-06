// 函数名称: sub_542910
// 虚拟地址: 0x542910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_542910(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    
    if (arg1[1] != 0x12)
        return 
    
    void* i = sub_4981f0(arg1)
    void* i_2 = i
    void* i_1 = nullptr
    
    if (*(i_2 + 0x14) s<= 0)
        return 
    
    int32_t edi_1 = 0
    
    do
        int32_t* esi_1 = *(i_2 + 0x18)
        int32_t* ecx = *(esi_1 + edi_1)
        
        if (ecx[1] != 3)
            sub_489550(i, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "d:\ax\trunk\ax2017\engine\texture.h", 0x86, "TextureGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        *(*sub_4981f0(ecx) + 0x30) = 1
        sub_53f7b0(*(esi_1 + edi_1))
        edi_1 += 0x30
        i = i_1 + 1
        i_1 = i
    while (i s< *(i_2 + 0x14))
}
