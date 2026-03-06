// 函数名称: sub_46b8e0
// 虚拟地址: 0x46b8e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46b8e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* var_8 = eax_1
    char const* const var_100
    int32_t var_fc
    char const* const var_f8
    char* ecx
    
    if (*arg1 == 2)
        bool cond:0_1 = arg1[0x12] != 0
        int32_t ebx_1 = 0x2bc2
        void* eax_2 = data_aca1ec
        int32_t var_80 = 0
        int32_t var_7c_1 = 0
        int32_t var_78_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x14)))
        eax_1 = data_126c23c
        int32_t* var_70_1 = eax_1
        int32_t var_74_1 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x18)))
        
        if (cond:0_1)
        label_46b9fb:
            
            if (sub_46b4c0(arg1) != 0)
                ebx_1 = 0x2eae
            
            void var_e4
            int128_t* eax_9 = sub_481680(&var_e4, 
                sub_49ec40(&var_80, &arg1[1], "tray ui", var_70_1, &var_80, &var_80, ebx_1, nullptr, 
                    1), 
                &arg1[0x5d], &var_e4)
            int32_t ecx_6 = arg1[1]
            int128_t var_6c = *eax_9
            int128_t var_5c = eax_9[1]
            int128_t var_4c = eax_9[2]
            int128_t var_3c = eax_9[3]
            int128_t var_2c = eax_9[4]
            int128_t var_1c = eax_9[5]
            sub_4a8700(ecx_6, &var_6c)
            int32_t var_f8_1 = 0xffffffff
            sub_4a8570(arg1[1])
            
            if (sub_46b4c0(arg1) != 0 || arg1[0x12] != 0)
                int32_t var_f8_2 = 0xffffffff
                sub_4a8570(arg1[1])
            
            TEB* fsbase
            
            if (data_15147cc s> *(*fsbase->ThreadLocalStoragePointer + 4))
                __Init_thread_header(&data_15147cc)
                
                if (data_15147cc == 0xffffffff)
                    int32_t eax_13 = data_114e80c
                    data_15147d4 = eax_13
                    data_15147d0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_15147e8 = "shipWorldCyan"
                    data_15147dc = data_114e808
                    data_151480c = eax_13 + 2
                    data_1514828 = eax_13 + 3
                    data_15147ec = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_1514804 = "shipWorldBrown"
                    data_15147f0 = eax_13 + 1
                    data_15147f8 = &data_15147d0
                    data_1514808 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_1514820 = "shipWorldGreen"
                    data_1514814 = &data_15147ec
                    data_1514824 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
                    data_151483c = "shipWorldYellow"
                    data_114e80c = eax_13 + 4
                    data_1514830 = &data_1514808
                    data_114e808 = &data_1514824
                    __Init_thread_footer(&data_15147cc)
            
            int32_t var_f8_3 = 0xffffffff
            sub_4a8570(arg1[1])
            sub_4a4740(arg1[1], 0, data_620d84)
            int32_t result = arg1[1]
            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
            return result
        
        int32_t ecx_1 = arg1[0x15]
        
        if (ecx_1 != 0)
            uint32_t edx_1 = zx.d(ecx_1.w)
            
            if (edx_1 u>= data_62d6c8)
            label_46bbd3:
                var_f8 = "DataArray<struct RollGfx>::DataArrayGet"
                ecx = "DataArrayTryToGet(id) != NULL"
                var_fc = 0x6d
                var_100 = "d:\ax\trunk\ax2017\engine\dataarray.h"
            else
                eax_1 = edx_1 * 0x8ac + data_62d6c4
                
                if (eax_1[0x22a] != ecx_1)
                    goto label_46bbd3
                
                eax_1 = edx_1 * 0x8ac
                int32_t edx_2 = data_62d6c4
                int32_t ecx_2 = *(eax_1 + edx_2 + 0x1c)
                
                if (ecx_2 != 0)
                    eax_1 = zx.d(ecx_2.w)
                    
                    if (eax_1 u>= data_62d6c8)
                        goto label_46bbd3
                    
                    eax_1 = eax_1 * 0x8ac + edx_2
                    
                    if (eax_1[0x22a] != ecx_2)
                        goto label_46bbd3
                    
                    if (sub_46bc50(eax_1) != 0)
                        ebx_1 = 0x2e2d
                    
                    goto label_46b9fb
                
                var_f8 = "DataArray<struct RollGfx>::DataArrayGet"
                var_fc = 0x6c
                ecx = "id != DATAID_NULL"
                var_100 = "d:\ax\trunk\ax2017\engine\dataarray.h"
        else
            var_f8 = "DataArray<struct RollGfx>::DataArrayGet"
            var_fc = 0x6c
            ecx = "id != DATAID_NULL"
            var_100 = "d:\ax\trunk\ax2017\engine\dataarray.h"
    else
        var_f8 = "DeclareTray"
        var_fc = 0x5a0e
        var_100 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_TRAY_SHIPPING"
    
    sub_489550(eax_1, &data_5b2591, ecx, var_100, var_fc, var_f8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
