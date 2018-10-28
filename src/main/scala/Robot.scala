class Robot {
  private var robotName = makeName

  def name = robotName

  def reset() = {
    robotName = makeName
  }

  private def makeName = {
    (1 to 2).map { x => ('A' to 'Z') (scala.util.Random.nextInt(26)) } ++
    (3 to 5).map { x => ('0' to '9') (scala.util.Random.nextInt(10)) }
  }.mkString
}
