import SwiftTreeSitter

public final class BreakNode: Statement {
  public let file: MesonSourceFile
  public var types: [Type] = []
  public let location: Location
  public weak var parent: Node?

  init(file: MesonSourceFile, node: SwiftTreeSitter.Node) {
    self.file = file
    self.location = Location(node: node)
  }
  fileprivate init(file: MesonSourceFile, location: Location) {
    self.file = file
    self.location = location
  }
  public func clone() -> Node {
    let location = self.location.clone()
    return BreakNode(file: file, location: location)
  }
  public func visit(visitor: CodeVisitor) { visitor.visitBreakStatement(node: self) }
  public func visitChildren(visitor: CodeVisitor) {}
  public func setParents() {

  }
  public var description: String { return "(break)" }
}
