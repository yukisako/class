require 'rubygems'
gem 'serialport','>=1.0.4'
require 'serialport'


def receive(port)
  sp = SerialPort.new(port, 9600, 8, 1, SerialPort::NONE)
  loop do
      puts sp.readline
  end 
  sp.close
end

port= "/dev/tty.usbmodem1411"

receive(port)