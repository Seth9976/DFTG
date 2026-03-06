// 函数名称: sub_4d93c0
// 虚拟地址: 0x4d93c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4d93c0(int32_t* arg1)
{
    // 第一条实际指令: char* edi = nullptr
    char* edi = nullptr
    char const* const var_28
    int32_t var_24
    char const* const var_20
    void* eax
    char* ecx
    
    if (arg1[1] == 0x23)
        eax = sub_4981f0(arg1)
        void* var_10_1 = eax
        
        if (data_6c9bac u< data_6c9ba4)
            eax = data_6c9ba8
            void* ecx_2 = data_6c9ba0
            
            if (eax u<= ecx_2)
                int32_t esi = data_6c9b9c
                void* eax_1
                
                if (eax != ecx_2)
                    ecx_2 = eax
                    eax_1 = *(esi + eax * 0x18 + 0x14)
                else
                    eax_1 = ecx_2 + 1
                    data_6c9ba0 = eax_1
                
                data_6c9ba8 = eax_1
                void* edx = ecx_2 * 3
                *(esi + (edx << 3)) = zx.o(0)
                *(esi + (edx << 3) + 0x10) = 0
                *(esi + (edx << 3) + 0x14) = data_6c9bb0 << 0x10 | ecx_2
                int32_t eax_7 = data_6c9bb0 + 1
                
                if (eax_7 == 0x10000)
                    eax_7 = 1
                
                data_6c9bac += 1
                data_6c9bb0 = eax_7
                int32_t result = *(esi + (edx << 3) + 0x14)
                *(esi + (edx << 3)) = arg1
                void* eax_8 = *(var_10_1 + 0x28)
                int32_t* ecx_3 = *(eax_8 + 0x38)
                
                if (ecx_3 != 0)
                    edi = *ecx_3
                else if (*(eax_8 + 0x30) != 0)
                    edi = ***(eax_8 + 0x34)
                
                uint32_t (* eax_11)[0x4] = sub_530710(*(var_10_1 + 0x30))
                *(esi + (edx << 3) + 8) = eax_11
                (*eax_11)[3] = sub_4d9320
                *(*(esi + (edx << 3) + 8) + 0x18) = result
                int32_t* eax_13 = sub_532110(*(var_10_1 + 0x28))
                *(esi + (edx << 3) + 4) = eax_13
                
                if (edi != 0)
                    int32_t eax_15 = sub_52f690(*eax_13, edi)
                    
                    if (eax_15 != 0)
                        sub_533490(eax_13, eax_15)
                
                return result
            
            var_20 = "DataArray<struct Spine>::DataArrayAlloc"
            var_24 = 0xf5
            ecx = "mFreeListHead <= mMaxUsedCount"
        else
            var_20 = "DataArray<struct Spine>::DataArrayAlloc"
            var_24 = 0xf4
            ecx = "mUsedCount < mMaxSize"
        
        var_28 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_20 = "SpineDefGet"
        var_24 = 0x1bd
        var_28 = "d:\ax\trunk\ax2017\engine\spine.cpp"
        ecx = "assetPtr->assetType == ASSET_TYPE_SPINE"
    
    sub_489550(eax, &data_5b2591, ecx, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
