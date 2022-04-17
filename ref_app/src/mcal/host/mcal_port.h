///////////////////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2007 - 2020.
//  Distributed under the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt
//  or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef MCAL_PORT_2012_06_27_H_
  #define MCAL_PORT_2012_06_27_H_

  namespace mcal
  {
    namespace port
    {
      typedef void config_type;

      auto init(const config_type*) -> void;

      class port_pin
      {
      public:
        static auto set_direction_output()noexcept -> void { }
        static auto set_direction_input ()noexcept -> void { }
        static auto set_pin_high        ()noexcept -> void { }
        static auto set_pin_low         ()noexcept -> void { }
        static auto read_input_value    ()noexcept -> bool { return false; }
        static auto toggle_pin          ()noexcept -> void { }
      };
    }
  }

#endif // MCAL_PORT_2012_06_27_H_
