
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0520
#error This file was generated by a newer version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0800
#error This file was generated by an older version of the Bond compiler and is incompatible with your version of the Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>



namespace tests
{
    
    template <typename T>
    struct Foo
    {
        std::vector<std::vector<T, typename arena::rebind<T>::other>, typename arena::rebind<std::vector<T, typename arena::rebind<T>::other> >::other> aa;
        
        Foo()
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        Foo(const Foo&) = default;
#endif
        
#if !defined(BOND_NO_CXX11_DEFAULTED_MOVE_CTOR)
        Foo(Foo&&) = default;
#elif !defined(BOND_NO_CXX11_RVALUE_REFERENCES)
        Foo(Foo&& other)
          : aa(std::move(other.aa))
        {
        }
#endif
        
        explicit
        Foo(const arena& allocator)
          : aa(allocator)
        {
        }
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        Foo& operator=(const Foo&) = default;
#endif

        bool operator==(const Foo& other) const
        {
            return true
                && (aa == other.aa);
        }

        bool operator!=(const Foo& other) const
        {
            return !(*this == other);
        }

        void swap(Foo& other)
        {
            using std::swap;
            swap(aa, other.aa);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    template <typename T>
    inline void swap(::tests::Foo<T>& left, ::tests::Foo<T>& right)
    {
        left.swap(right);
    }

    
    namespace _bond_enumerators
    {
    namespace EnumToWrap
    {
        enum EnumToWrap
        {
            anEnumValue
        };
        
        extern const std::map<enum EnumToWrap, std::string> _value_to_name_EnumToWrap;
        extern const std::map<std::string, enum EnumToWrap> _name_to_value_EnumToWrap;

        inline
        const char* GetTypeName(enum EnumToWrap)
        {
            return "EnumToWrap";
        }

        inline
        const char* GetTypeName(enum EnumToWrap, const ::bond::qualified_name_tag&)
        {
            return "tests.EnumToWrap";
        }

        inline
        const std::map<enum EnumToWrap, std::string>& GetValueToNameMap(enum EnumToWrap)
        {
            return _value_to_name_EnumToWrap;
        }

        inline
        const std::map<std::string, enum EnumToWrap>& GetNameToValueMap(enum EnumToWrap)
        {
            return _name_to_value_EnumToWrap;
        }

        const std::string& ToString(enum EnumToWrap value);

        void FromString(const std::string& name, enum EnumToWrap& value);

        inline
        bool ToEnum(enum EnumToWrap& value, const std::string& name)
        {
            std::map<std::string, enum EnumToWrap>::const_iterator it =
                _name_to_value_EnumToWrap.find(name);

            if (_name_to_value_EnumToWrap.end() == it)
                return false;

            value = it->second;

            return true;
        }

        inline
        bool FromEnum(std::string& name, enum EnumToWrap value)
        {
            std::map<enum EnumToWrap, std::string>::const_iterator it =
                _value_to_name_EnumToWrap.find(value);

            if (_value_to_name_EnumToWrap.end() == it)
                return false;

            name = it->second;

            return true;
        }
    } // namespace EnumToWrap
    } // namespace _bond_enumerators

    using namespace _bond_enumerators::EnumToWrap;
    

    
    struct WrappingAnEnum
    {
        ::tests::EnumToWrap aWrappedEnum;
        
        WrappingAnEnum()
          : aWrappedEnum(::tests::_bond_enumerators::EnumToWrap::anEnumValue)
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        WrappingAnEnum(const WrappingAnEnum&) = default;
#endif
        
#if !defined(BOND_NO_CXX11_DEFAULTED_MOVE_CTOR)
        WrappingAnEnum(WrappingAnEnum&&) = default;
#elif !defined(BOND_NO_CXX11_RVALUE_REFERENCES)
        WrappingAnEnum(WrappingAnEnum&& other)
          : aWrappedEnum(std::move(other.aWrappedEnum))
        {
        }
#endif
        
        explicit
        WrappingAnEnum(const arena&)
          : aWrappedEnum(::tests::_bond_enumerators::EnumToWrap::anEnumValue)
        {
        }
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        WrappingAnEnum& operator=(const WrappingAnEnum&) = default;
#endif

        bool operator==(const WrappingAnEnum& other) const
        {
            return true
                && (aWrappedEnum == other.aWrappedEnum);
        }

        bool operator!=(const WrappingAnEnum& other) const
        {
            return !(*this == other);
        }

        void swap(WrappingAnEnum& other)
        {
            using std::swap;
            swap(aWrappedEnum, other.aWrappedEnum);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(::tests::WrappingAnEnum& left, ::tests::WrappingAnEnum& right)
    {
        left.swap(right);
    }
} // namespace tests

#if !defined(BOND_NO_CXX11_ALLOCATOR)
namespace std
{
    template <typename _Alloc, typename T>
    struct uses_allocator<typename ::tests::Foo<T>, _Alloc>
        : is_convertible<_Alloc, arena>
    {};

    template <typename _Alloc>
    struct uses_allocator< ::tests::WrappingAnEnum, _Alloc>
        : is_convertible<_Alloc, arena>
    {};
}
#endif

