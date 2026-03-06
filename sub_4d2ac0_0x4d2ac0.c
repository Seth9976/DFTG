// 函数名称: sub_4d2ac0
// 虚拟地址: 0x4d2ac0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d2ac0(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t edx = *(arg1 + 8)
    
    if (edx != 0)
        (*(*data_114ec78 + 0x14))(edx)
        *(arg1 + 8) = 0
    
    int32_t result = *(arg1 + 0x10)
    
    if (result != 0)
        result = _aligned_free_base(result)
        *(arg1 + 0x10) = 0
    
    if (*(arg1 + 0x18) == 0)
        return result
    
    int32_t eax_4 = EnterCriticalSection(data_114e848 + 4)
    void* ebx
    ebx:1.b = 1
    
    while (true)
        ebx.b = 0
        int32_t edi_1 = 0
        
        while (true)
            int32_t esi_1 = data_114e848
            
            if (*(edi_1 + esi_1 + 0x24) == 0)
                goto label_4d2b79
            
            int32_t* ecx_1 = *(edi_1 + esi_1 + 0x28)
            char const* const var_20
            int32_t var_1c
            char const* const var_18_7
            char* ecx_3
            
            if (ecx_1[1] != 3)
                var_18_7 = "TextureGetDef"
                var_1c = 0x86
                var_20 = "d:\ax\trunk\ax2017\engine\texture.h"
                ecx_3 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            label_4d2bfa:
                sub_489550(eax_4, &data_5b2591, ecx_3, var_20, var_1c, var_18_7)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            eax_4 = sub_4981f0(ecx_1)
            
            if (eax_4 != arg1)
                goto label_4d2b79
            
            ebx.b = 1
            
            if (*(edi_1 + esi_1 + 0x24) == 1)
                LeaveCriticalSection(data_114e848 + 4)
                Sleep(0x64)
                eax_4 = EnterCriticalSection(data_114e848 + 4)
            else
                ebx:1.b = 0
                eax_4 = sub_4d2800(*(edi_1 + esi_1 + 0x28))
                *(edi_1 + esi_1 + 0x24) = 0
                *(edi_1 + esi_1 + 0x28) = 0
            label_4d2b79:
                edi_1 += 8
                
                if (edi_1 s< 0x50)
                    continue
                else if (ebx.b == 0)
                    var_18_7 = "TextureUnbindGraphicsBuffers"
                    var_1c = 0x34f
                    var_20 = "d:\ax\trunk\ax2017\engine\texture.cpp"
                    ecx_3 = "foundIt"
                    goto label_4d2bfa
            
            if (ebx:1.b != 0)
                break
            
            return LeaveCriticalSection(data_114e848 + 4)
}
