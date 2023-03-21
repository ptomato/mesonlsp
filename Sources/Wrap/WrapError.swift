import Foundation

public enum WrapError: Error {
  case genericError(String)
  case noWrapSectionFound(String)
  case unknownWrapType(String)
  case commandNotFound(String)
}