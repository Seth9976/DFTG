// 函数名称: sub_4d30b0
// 虚拟地址: 0x4d30b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t** __fastcallsub_4d30b0(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 0x24)
    if (arg1 u> 0x24)
        int32_t eax
        sub_489550(eax, &data_5b2591, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
            "d:\ax\trunk\ax2017\engine\assettyperegistry.cpp", 0xbc, "AssetTypeGetInfo")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* esi = data_114e86c
    int32_t* edi = *(esi + 0x10)
    char** ebx = *((arg1 << 5) + data_114ec7c + 0x1c)
    *(esi + 0x1c) += 1
    
    if (edi == 0)
        sub_4d7960(esi + 0x10)
        edi = *(esi + 0x10)
    
    *(esi + 0x10) = *edi
    edi[2] = 0
    edi[3] = 0
    *edi = &data_5b2591
    edi[1] = 0
    edi[2] = 0
    edi[3] = 0
    edi[4] = ebx
    sub_48a5e0(edi, *ebx)
    int32_t** result = sub_4c2e40(0x10)
    *result = zx.o(0)
    result[3] = ebx
    result[1] = edi
    *result = sub_4d60d0(edi, ebx)
    return result
}
